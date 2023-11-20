from operator import itemgetter

# leggiamo l'inventario
# leggi l'inventario e accorpa sul isbn
def leggi_inventario(nome_file):
  libri={}
  
  with open(nome_file,'r', encoding='utf-8') as file:
    for line in file:
      # codiceCopia;codiceISBN;titolo;autore
      campi=line.strip().split(';')
      [codiceCopia, codiceISBN, titolo, autore] = campi
      
      # controllo se il codice esiste già nei libri
      if codiceISBN in libri:
        libri[codiceISBN]["copie"].append(codiceCopia)
      else:
        libri[codiceISBN] = {
          'copie': [codiceCopia],
          'autore': autore,
          'titolo': titolo
        }

  # ordiniamo i libri per isbn
  nlibri = dict(sorted(libri.items()))
  return nlibri

def crea_file(inventario, inventarioScuola, inventarioNew):
  fscuola = open(inventarioScuola, "w", encoding="utf-8")
  fnew    = open(inventarioNew,    "w", encoding="utf-8")
  libriRegalati = 0
  copieRegalate = 0

  # per ogni libro presente nell'inventario
  for isbn in inventario:
    titolo = inventario[isbn]["titolo"]
    autore = inventario[isbn]["autore"]

    # verifico se il numero di copie è > 3
    if len(inventario[isbn]["copie"]) > 3:
      daRegalare = ";".join(inventario[isbn]["copie"][3:])
      daTenere   = ";".join(inventario[isbn]["copie"][0:3])

      # tengo il conteggio delle copie regalate e dei libri
      copieRegalate += (len(inventario[isbn]["copie"]) - 3)
      libriRegalati += 1
      
      # aggiungi a inventarioScuola
      print(f"{isbn};{autore};{daRegalare}", file=fscuola)

      # aggiungi a inventarioNew
      print(f"{isbn};{autore};{daTenere}", file=fnew)

    else:
      copie = ";".join(inventario[isbn]["copie"])
      print(f"{isbn};{autore};{copie}", file=fnew)

  fscuola.close()
  fnew.close()
  return libriRegalati, copieRegalate

def main():
  inventario = leggi_inventario("inventarioOld.csv")
  [libriRegalati, copieRegalate] = crea_file(inventario, "inventarioScuola.csv", "inventarioNew.csv")

  print(f"Libri regalati: {libriRegalati}")
  print(f"Copie regalati: {copieRegalate}")

main()