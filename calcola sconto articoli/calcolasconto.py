articoli = int(input("quanti articoli vuoi inserire? "))
somma = 0

# per ogni articolo (quindi da 0 ad articoli)
for i in range(0 , articoli):
  # chiedere il costo
  costo = float(input("inserisci il costo dell'articolo: "))

  # chiedere lo sconto
  percentuale = float(input("inserisci sconto applicato: "))

  # sconto del singolo articolo
  sconto = costo * percentuale / 100

  # sommato gli sconti per ottenere il totale
  somma = somma + sconto

print("Lo sconto totale è di "+ str(somma) + " euro")