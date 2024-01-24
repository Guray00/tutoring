def leggistudenti(nomefile):
  studenti = {}
  with open(nomefile, 'r', encoding= 'utf-8') as file:
    for line in file:
      campi= line.strip().split(',')
      [matricola, data_esame, codice_es, voto ] = campi
      if voto == 'R':
        continue
      if voto == 'A':
        continue
    
      if matricola not in studenti:
        studenti[matricola] = {}
      
      studenti[matricola][codice_es] = [int(voto)]
      
  return studenti 
  
def calcolalaurea(studenti):
  laureandienon = {}
  
  for studente in studenti:
    sommacfu = 0
    sommacfuobb = 0
    prod = 0

    for esame in studenti[studente]:
      sommacfu += studenti[studente][esame][1]
      prod  += (studenti[studente][esame][1] * studenti[studente][esame][0])

      if studenti[studente][esame][2] == 1:
        sommacfuobb += studenti[studente][esame][1]

    mediacfu = prod / sommacfu
    laureandienon[studente] = [mediacfu, sommacfu, sommacfuobb]

  return laureandienon    

def main():
  studenti = leggistudenti('esami.log')
  
  with open('cfu.dati','r', encoding='utf-8') as file:
    for line in file:
      campi = line.strip().split(',')
      [codice_esame, CFU, obbligatorio] = campi
      for studente in studenti:
        for esame in studenti[studente]:
          if codice_esame == esame:
            studenti[studente][esame].append(int(CFU))
            studenti[studente][esame].append(int(obbligatorio))

  ragazzi = calcolalaurea(studenti)

  for ragazzo in ragazzi:
    print(f'studente {ragazzo} con media {ragazzi[ragazzo][0]:.2f}, crediti {ragazzi[ragazzo][1]} di cui obbligatori {ragazzi[ragazzo][2]}', end='')
    if ragazzi[ragazzo][1] >= 30 and ragazzi[ragazzo][2] >= 10:
      print(f' si laurea')
    else:
      print(f' no laurea')
     
main()