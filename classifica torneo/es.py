from operator import itemgetter

def leggi_partite(nomefile):
  f = open(nomefile,'r', encoding='utf-8')

  # squadra1 - squadra2 : punteggio1 - punteggio2
  squadre = {}
  
  for line in f:
    sq       = line.split(':')[0].strip()
    punteggi = line.split(':')[1].strip()
    
    squadra1 = sq.split('-')[0].strip()
    squadra2 = sq.split('-')[1].strip()
    
    punteggio1 = int(punteggi.split('-')[0].strip())
    punteggio2 = int(punteggi.split('-')[1].strip())

    punti1 = 0
    punti2 = 0
    if punteggio1 > punteggio2 :
      punti1 = 3
      punti2 = 1
    elif punteggio1 == punteggio2:
      punti1 = 2
      punti2 = 2
    else:
      punti1 = 1
      punti2 = 3
      
    # squadra1   
    if squadra1 not in squadre:
      squadre[squadra1] = {'PG': 1, 'PT': punti1, 'PF': punteggio1, 'PS': punteggio2, 'Q': -1}
    else:
      squadre[squadra1]['PG'] += 1
      squadre[squadra1]['PT'] += punti1
      squadre[squadra1]['PF'] += punteggio1
      squadre[squadra1]['PS'] += punteggio2
      
      
    # squadra2   
    if squadra2 not in squadre:
      squadre[squadra2] = {'PG': 1, 'PT': punti2, 'PF': punteggio2, 'PS': punteggio1, 'Q': -1}
    else:
      squadre[squadra2]['PG'] += 1
      squadre[squadra2]['PT'] += punti2
      squadre[squadra2]['PF'] += punteggio2
      squadre[squadra2]['PS'] += punteggio1
      
  f.close()
  return squadre
  

def main():
  squadre = leggi_partite("torneo.txt")

  for squadra in squadre:
    squadre[squadra]['Q'] = squadre[squadra]['PF']/squadre[squadra]['PS']

  tabella = []

  for squadra in squadre:
    tabella.append([squadre[squadra]['PT'], squadre[squadra]['Q'], squadra, squadre[squadra]['PG'], squadre[squadra]['PF'], squadre[squadra]['PS']])

  tabella.sort(key=itemgetter(1), reverse=True) # sistema i parimerito
  tabella.sort(key=itemgetter(0), reverse=True)

  #tabella.sort(reverse=True)

  print('SQUADRA               GI PTI   Q   PF  PS')

  for riga in tabella:
    print(f'{riga[2]:20s} {riga[3]:2d} {riga[0]:3d} {riga[1]:5.2f} {riga[4]:3d} {riga[5]:3d}')

main()