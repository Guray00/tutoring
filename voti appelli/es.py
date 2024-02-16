import csv
import operator

def leggiprimo(nomefile):
  with open(nomefile, 'r', encoding = 'utf-8') as file:
    reader = csv.DictReader(file, delimiter = ',')
    return list(reader)
    
def secondoappello(nomefile):
  with open(nomefile, 'r', encoding = 'utf-8') as file:
    reader = csv.DictReader(file, delimiter = ',')
    header = list(next(reader))
    secondi = list(reader)
    return header, secondi
    
def scrivifile(primo,nomefile,header):
  with open(nomefile,'w', encoding = 'utf-8') as f:
    header1 = ','.join(header)
    print(f'{header1}',file=f)
    for studente in primo:
      stu= studente.values()
      print(f"{','.join(stu)}", file=f)


def main():
  primo = leggiprimo('primo_appello.csv')
  (header, secondi) = secondoappello('secondo_appello.csv')
  primo.extend(secondi)

  primo.sort(key=operator.itemgetter('cognome'))
  primo.sort(key=operator.itemgetter('voto'))
  scrivifile(primo, 'sessione.csv',header)
  totdiff = 0
  for studente in primo[:5]:
    print(studente)
    totdiff += abs(float(studente['voto'])- float(studente['media_esami_precedenti']))
  tot = (totdiff)/5
  print(f'la media degli studenti ...{tot:.2f}')
  
main()