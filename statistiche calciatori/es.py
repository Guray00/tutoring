import csv
import operator

# apertura del file 
def leggi_calciatori(nomefile):
  file = open(nomefile, 'r', encoding='utf-8')
  giocatori = list(csv.DictReader(file, delimiter=','))

  # convertiamo a intero

  for giocatore in giocatori:
    for campo in ["birth_year",
      "minutes",
      "goals",
      "assists",
      "offsides",
      "crosses",
      "interceptions",
      "tackles_won",
      "pens_conceded",
      "ball_recoveries",
      "aerials_won",
      "aerials_lost",
    ]:
      giocatore[campo] = int(giocatore[campo])
  
  return giocatori

# funzione che consente di calcolare l'efficacia di un attante
def calcola_attaccante(giocatore):
  efficacia_attaccante = (giocatore['goals'] +giocatore['assists'] - giocatore['offsides'])/giocatore['minutes']
  return efficacia_attaccante

# funzione che consente di calcolare l'efficacia di un centrocampista
def calcola_centrocampista(giocatore):
  tmp = 0
  if giocatore["crosses"] != 0:
    tmp = giocatore["assists"] / giocatore["crosses"]
    
  efficacia = (giocatore["interceptions"] + giocatore["ball_recoveries"] + (tmp)) / giocatore["minutes"]
  return efficacia

# mostro a schermo i 3 migliori attaccanti
def migliori_attaccanti(attaccanti):
  # ordina i dati per efficacia
  attaccanti.sort(key=operator.itemgetter("efficacia"), reverse=True)

  print("I tre attacanti più efficaci sono:")
  print("Nome                Squadra              Efficacia")
  for giocatore in attaccanti[:3]:
    print(f"{giocatore['player']:20s} {giocatore['team']:20s} {giocatore['efficacia']:10.3f}")
  print()

# mostro a schermo i 3 migliori centrocampisti 
def migliori_centrocampisti(centrocampisti):
  centrocampisti.sort(key=operator.itemgetter("efficacia"), reverse=True)

  print("I tre centrocampisti più efficaci sono:")
  print("Nome                Squadra              Efficacia")
  for giocatore in centrocampisti[:3]:
    print(f"{giocatore['player']:20s} {giocatore['team']:20s} {giocatore['efficacia']:10.3f}")
  print()

def calcolo_squadre(giocatori):

  # dizionario in cui salviamo per ogni squadra una lista di giocatori
  squadre =  {}

  # per ogni giocatore nei giocatori
  for giocatore in giocatori:
    # recupero il nome della squadra
    squadra = giocatore["team"]

    # se la squadra non è presente tra le squadre la aggiungo
    if squadra not in squadre:
      squadre[squadra] = []

    # aggiungo il giocatore alla squadra di cui fa parte
    squadre[squadra].append(giocatore)

 
  return squadre

  
def main():
  giocatori = leggi_calciatori("player_stats.csv")

  attaccanti     = []
  centrocampisti = []
  
  for giocatore in giocatori:
    # calcolo l'eta
    giocatore["anni"] = 2023 - giocatore["birth_year"]
    
    if giocatore["position"] == "FW":
      giocatore["efficacia"] = calcola_attaccante(giocatore);
      attaccanti.append(giocatore)

    elif giocatore["position"] == "MF":
      giocatore["efficacia"] = calcola_centrocampista(giocatore);
      centrocampisti.append(giocatore)

  # stampo 3 migliori attaccanti e 3 migliori centrocampisti
  migliori_attaccanti(attaccanti)
  migliori_centrocampisti(centrocampisti)

  # recuperi le squadre
  squadre = calcolo_squadre(giocatori)

  # lista che contiene dei dizionari con 
  # dentro il nome della squadra e l'eta media
  eta_squadre = []
  
  # per ogni squadra
  for squadra in squadre:
    somma_squadra = 0

    # per ogni giocatore
    for giocatore in squadre[squadra]:

      # fai la somma degli anni
      somma_squadra += giocatore['anni']
      
    eta_media = somma_squadra / len(squadre[squadra])

    tmp = {}
    tmp["nome"] = squadra
    tmp["eta"]  = eta_media
    eta_squadre.append(tmp)

  eta_squadre.sort(key=operator.itemgetter("eta"))

  for s in eta_squadre[:3]:
    print(f"{s['nome']} con {s['eta']:3.2f} anni")

main()