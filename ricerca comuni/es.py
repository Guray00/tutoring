# https://github.com/polito-informatica/Esempi-esame/tree/master/esami2022-23/ricerca_comuni

def leggicomuni(nomefile):
  comuni = []
  with open(nomefile,'r', encoding= 'utf-8') as file:
    for line in file:
      campi = line.strip().split(';')
      [comune, regione, provincia, abitanti, altitudine] = campi
      record = {'comune': comune, 'regione': regione, 'provincia': provincia, 'abitanti': abitanti, 'altitudine': int(altitudine)}
      comuni.append(record)
  return comuni      


def main():
  comuni = leggicomuni('comuni.csv')
  #print(comuni)
  province = []
  errato = True

  while errato:
    file1 = input('inserisci file:')
    
    try:
      with open(file1, 'r', encoding = 'utf-8') as file:
  
        line = file.readline().strip()
        while line != '':
          province.append(line)
          line= file.readline().strip()
      #print(province)
      for provincia in province:
        alt = 0
        altnome = ''
        for comune in comuni:
          if comune['provincia'] == provincia:
            if comune['altitudine'] >= alt:
              alt = comune['altitudine']
              altnome = comune['comune']
        print(f"Comune più alto nella provincia di {provincia} e {altnome} che si trova a {alt} ")
        errato = False
        
    except IOError:
      print('errore file non trovato\n')
      errato = True

main()
