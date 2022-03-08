def potenza(base, esponente):
  risultato = 1  
  for i in range(esponente):
    risultato = risultato * base 

  return risultato    


# --- main ---
base = int(input("inserisci la base: "))
esponente = int(input("inserisci esponente: "))

ris = potenza(base, esponente)
print("il risultato e': " + str(ris))


 