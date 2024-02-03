import operator

def leggiviaggi(nomefile):
  viaggi = {}
  with open(nomefile, 'r', encoding= 'utf-8') as file:
    for line in file:
      campi = line.strip().split(',')
      [destinazione, durata, passeggeri] = campi
      viaggi[destinazione] = {'durata': int(durata), 'passeggeri': int(passeggeri)}
  return viaggi

# leggo le lingue
def leggilingue(nomefile, viaggi):
  with open(nomefile, 'r', encoding= 'utf-8') as file:
    for line in file:
      campi = line.strip().split(',')
      pianeta = campi[0]
      lingue = campi[1:]
      for destinazione in viaggi:
        if destinazione == pianeta:
          viaggi[destinazione]['lingue'] = lingue

def main():
  viaggi = leggiviaggi('viaggi_enterprise.txt')
  leggilingue('lingue_pianeti.txt', viaggi)
  
  duratatot = 0
  passeggeritot = 0
  
  for destinazione in viaggi:
    duratatot += viaggi[destinazione]['durata']
    passeggeritot += viaggi[destinazione]['passeggeri']
  duratamedia = duratatot / len(viaggi)
  
  print (f'la durata media dei viaggi è: {duratamedia}')
  print (f'il numero totale di passeggeri è: {passeggeritot}')
  print ('lingue parlate in ogni pianeta visitato:')
  
  for destinazione in viaggi :
    print(f'{destinazione} : {viaggi[destinazione]["lingue"]}')
  print('Tre lingue più ricorrenti tra i pianeti visitati:', end = '')
  lingue = {}
  
  for destinazione in viaggi:
    for lingua in viaggi[destinazione]['lingue']:
      if lingua in lingue:
        lingue[lingua] += 1

      if lingua not in lingue:
        lingue[lingua] = 1

  lista_lingue = []
  for lingua in lingue:
    lista_lingue.append([lingue[lingua], lingua])

  lista_lingue.sort(key=operator.itemgetter(0), reverse = True)
  for i in range(3):
    print(lista_lingue[i][1], end= ',')

main()