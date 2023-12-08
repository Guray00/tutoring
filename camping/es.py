import csv

# lettura del file occupazione.txt
def leggi_occupazione(nomefile):
  with open(nomefile, "r", encoding="utf-8") as file:
    # importo le righe
    reader = csv.DictReader(file, delimiter=";")

    # ottengo lista di dizionari
    occupazioni = list(reader)

    # per ogni elemento all'interno della lista
    for occupazione in occupazioni:
      # prendo i campi di sopra e li trasformo
      occupazione["id_cliente"]     = int(occupazione["id_cliente"]) 
      occupazione["numero_adulti"]  = int(occupazione["numero_adulti"])
      occupazione["numero_bambini"] = int(occupazione["numero_bambini"])
      occupazione["elettricità"] = (occupazione["elettricità"] == "sì")

    return occupazioni

def leggi_prezzi(nomefile):
  with open(nomefile, "r", encoding="utf-8") as file:
    reader = csv.DictReader(file, delimiter = ";")
    prezzi = list(reader)
    
    for prezzo in prezzi:
      prezzo["prezzo_tenda"]       = float(prezzo["prezzo_tenda"])
      prezzo["prezzo_camper"]      = float(prezzo["prezzo_camper"])
      prezzo["prezzo_persona"]     = float(prezzo["prezzo_persona"])
      prezzo["prezzo_elettricità"] = float(prezzo["prezzo_elettricità"])
      # rimuovo la chiave ''
      del prezzo['']

    return prezzi

def leggi_calendario(nomefile):
  calendario = {}
  with open(nomefile, "r", encoding="utf-8") as file:
    for n,line in enumerate(file):
      calendario[line.strip()] = n+1

  return calendario
  
def main():
  occupazioni = leggi_occupazione("occupazione.txt")
  prezzi = leggi_prezzi("prezzi.txt")
  calendario = leggi_calendario("calendario.txt")

  for occupazione in occupazioni:
    arrivo = occupazione["arrivo"]
    partenza = occupazione["partenza"]
    totale = 0.0

    notti = calendario[partenza] - calendario[arrivo]
    
    # per ogni notte
    for i in range(notti):
      id = calendario[arrivo]+i  
      prezzo_notte = None

      # devo cercare in quale periodo la notte cade
      for prezzo in prezzi:
        dal = calendario[prezzo["dal"]]
        al  = calendario[prezzo["al" ]]

        # mi salvo il prezzo della notte
        if dal <= id <= al:
          prezzo_notte = prezzo

      # ho trovato il prezzo della notte
      costo_notte = prezzo_notte['prezzo_persona'] * (occupazione['numero_adulti'] + occupazione['numero_bambini'])
      
      if occupazione['elettricità']:
          costo_notte += prezzo_notte['prezzo_elettricità']
      if occupazione['tipo_abitazione'] == 'camper':
          costo_notte += prezzo_notte['prezzo_camper']
      else:
          costo_notte += prezzo_notte['prezzo_tenda']

      totale += costo_notte

    print(f'cliente: {occupazione["id_cliente"]}, arrivo: {occupazione["arrivo"]}, partenza: {occupazione["partenza"]},  ' +
      f'tipo: {occupazione["tipo_abitazione"]}, persone: {occupazione["numero_adulti"] + occupazione["numero_bambini"]}, ' +
      f'elettricità: {occupazione["elettricità"]}, ' +
      f'prezzo: {totale}, numero notti: {notti}')
    
main()