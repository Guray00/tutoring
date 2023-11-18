# funzione che legge le informazioni presenti nello scontrino
def leggi_scontrino(nome_file):
  scontrino = {}
  
  with open(nome_file, "r", encoding='utf=8') as file:
    for line in file:
      campi = line.strip().split(",")
      prodotto = campi[0]
      prezzo = float(campi[1])

      # se c'è il prodotto
      if prodotto in scontrino:
        scontrino[prodotto][0] += 1
      else:
        scontrino[prodotto] = [1, prezzo]
        
  return scontrino 

def leggi_lista(nome_file):
  lista = {}
  
  with open(nome_file, "r", encoding="utf=8") as file:
    for line in file:
      campi = line.strip().split(",")
      nome = campi[0]
      quantita = campi[1]
      lista[nome] = int(quantita)

  return lista

def main():
  scontrino = leggi_scontrino("scontrino.csv")
  lista  = leggi_lista("lista.csv")

  # 1) TOTALE DELLA SPESA ===================================
  totale = 0.0
  
  # per ogni prodotto nello scontrino
  for p in scontrino:
    # sommo il prezzo relativo
    totale += (scontrino[p][0] * scontrino[p][1])
  
  print(f"Totale speso: {totale:.2f} euro")


  # 2) IMPORTO DEL COINQUILINO
  coinquilino = 0.0
  
  for prodotto in lista:

    # controlli se c'è nello scontro
    if prodotto in scontrino:
      coinquilino += (scontrino[prodotto][1]* min(lista[prodotto], scontrino[prodotto][0]))
      # aggiungi al totale speso 

  print(f"Totale dovuto: {coinquilino} euro")

  # 3) PRODOTTI MANCANTI
  prodotti_mancanti= {}
  for prodotto in lista:
    if prodotto not in scontrino:
      prodotti_mancanti[prodotto] = lista[prodotto]
      
    elif scontrino[prodotto][0] < lista[prodotto] :
      prodotti_mancanti[prodotto] = lista[prodotto] - scontrino[prodotto][0]
  
  print('prodotti mancanti:')
  for prodotto in prodotti_mancanti:
    print(f"{prodotti_mancanti[prodotto]} {prodotto}")
  
main()