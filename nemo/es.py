import operator

def leggiviaggi(nomefile):
  viaggi = {}
  with open(nomefile, 'r', encoding= 'utf-8') as file:
    for line in file:
      campi= line.strip().split(',')
      [luogo, durata, passeggeri] = campi
      viaggi[luogo] = {'durata': int(durata), 'passeggeri': int(passeggeri)}
  
  return viaggi
  
def leggipietre(nomefile, viaggi):
  with open(nomefile, 'r', encoding= 'utf-8') as file:
    for line in file:
      
      # Pacific Rim,Corallo Nero,Pietra di Luna,Opale Marino
      campi = line.strip().split(',')
      luogo = campi[0]
      pietre = campi[1:]
      if luogo in viaggi:
        viaggi[luogo]['pietre'] = pietre

def main():
  viaggi = leggiviaggi('viaggi_nemo.txt')
  leggipietre("pietre_preziose_luoghi.txt", viaggi)

  # calcolo durata e pesseggeri
  durata = 0
  passeggeritot = 0
  for luogo in viaggi:
    passeggeritot += viaggi[luogo]['passeggeri']
    durata +=  viaggi[luogo]['durata']
  
  
    
  duratamedia = durata / len(viaggi)
  print(f'la durata media dei viaggi è:{duratamedia:.2f}')
  print(f'il numero totale di passeggeri è: {passeggeritot}')
  print('tipi di pietre preziose per luogo visitato: ')
  for luogo in viaggi:
    print(f'- {luogo} : {", ".join(viaggi[luogo]["pietre"])}')

  # trovare quante volte compare una pietra tra tutti i viaggi
  pietre = {}

  for luogo in viaggi:
    for pietra in viaggi[luogo]["pietre"]:
      if pietra not in pietre:
        pietre[pietra] = 1
      else:
        pietre[pietra] += 1 

  lista_pietre = []

  for pietra in pietre:
    lista_pietre.append( [pietre[pietra], pietra] )

  lista_pietre.sort(key=operator.itemgetter(0), reverse=True)

  print("I tre tipi di pietre preziose più comuni: ", end="")
  for i in range(3):
    print(lista_pietre[i][1], end=", ")

main()