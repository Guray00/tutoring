# gli do "in input" i numeri, e lei mi restituisce il numero maggiore
def isminore(a, b):
  if a>b:
    return b
  else:
    return a


def MCD(a, b):
  min = isminore(x, y)
  mcd = 1
  
  # dobbiamo controllare i numeri da 1 a max (incluso)
  # quindi sarà max + 1
  # per dire se sono divisori o meno
  for i in range(2, min+1):
    # se i è divisore SIA per x che per y => MCD (attuale)
    if a%i==0 and b%i==0:
      mcd=i

  return mcd
      
# --- main ---
x = int(input("Inserisci il primo numero: "))
y = int(input("Inserisci il secondo numero: "))

mcd = MCD(x, y)

print("Il massimo comune divisore e': " + str(mcd))
