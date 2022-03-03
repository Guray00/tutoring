# 1) scrivere una funzione che RESTITUISCA il doppio di un numero
# 2) chiedi ore, minuti e secondi e RESTITUIRE i secondi totali


# ---- funzioni ------
def doppio(n):
  c=n*2
  return c

def tempo(ore, minuti, secondi):
  c=minuti*60
  o=ore*3600
  return c+o+secondi
# ------- main -------

# ES 1 --------------------------------------
# n=int(input("inserisci un numero: "))
# risultato = doppio(n)
# print(risultato)

# ES 2 --------------------------------------
m = int(input("inserisci le ore: "))
n = int(input("inserisci i minuti: "))
p = int(input("Inserisci i secondi"))
risultato = tempo(m, n, p)
print(risultato)