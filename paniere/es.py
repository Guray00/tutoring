import csv
import operator

# leggere i prodotti dal file e li restituisce
def leggi_prodotti(nome_file):
  prodotti = []
  
  with open(nome_file, 'r', encoding='utf-8') as file:
    reader = csv.DictReader(file, fieldnames=['date','place','grocery store', 'food item', 'essential', 'price'])
    next(reader)

    prodotti = list(reader)
    
  for prodotto in prodotti:
    prodotto['price']= float(prodotto['price'])
    prodotto['essential'] = (prodotto["essential"] == "E")

  return prodotti


# funzione che legge le 
def leggi_negozi(nome_file):
  # lista di negozi da memorizzare
  negozi=[]
  file = open(nome_file, 'r', encoding='utf-8')
  
  for line in file:
    negozi.append(line.strip())
  
  # chiude il file
  file.close()
  return negozi



def main():
  # recuperiamo i prodotti dal file e li salviamo come dizionari
  prodotti = leggi_prodotti("NLFoodPricing.csv")
  negozi = leggi_negozi("shops.txt")

  # 1. ===================================================
  # lista di prodotti essenziali
  essenziali= []

  # recuperati gli essenziali
  for prodotto in prodotti:
    # controlliamo non sia già presente
    if prodotto["food item"] in essenziali:
      continue
    
    if prodotto['essential']:
      essenziali.append(prodotto['food item'])

  essenziali.sort()
  
  # Stampiamo gli essenziali
  print("Prodotti:")
  for p in essenziali:
    print(f"- {p}")


  # 2. ===================================================

  # per ogni negozio in negozi
  print()
  negozi.sort()
  for negozio in negozi:
    print(negozio)
    
    # per ogni prodotto essenziale (in essenziali):
    for essenziale in essenziali:

      # set_prezzi = set()
      set_prezzi = set()

      # per ogni prodotto:
      for prodotto in prodotti:

        # non è il prodotto che guardavo:
        if prodotto["food item"] != essenziale: 
          continue

        # non è il negozio che guardavo:
        if prodotto['grocery store'] != negozio:
          continue

        # non è essenziale:
        if not prodotto['essential']:
          continue
        
        # aggiungo il prezzo al set
        set_prezzi.add(prodotto['price'])

      prezzo_minimo = min(set_prezzi)
    
      # stampo a schermo il prezzo minimo
      print(f"- {essenziale}: {prezzo_minimo} $/kg")
    print()

  # 3. =================================================

  while True:
    cibo= input('che cibo vuoi cercare? (q per smettere) ') 

    # verifico se voglio uscire
    if cibo == "q":
      break 

    set_prezzi = []

    # scorro tutti i prodotti
    for prodotto in prodotti:
      # controllo che sia il prodotto giusto
      if prodotto["food item"] != cibo:
        continue
        
      set_prezzi.append(prodotto)
      
    if len(set_prezzi) == 0:
      print(f"Cibo {cibo} non trovato\n")
      
    else:
      minimo = min(set_prezzi, key=operator.itemgetter("price"))
      print(f"prezzo minimo: {minimo['price']} $/kg da {minimo['grocery store']}\n")
    
main()