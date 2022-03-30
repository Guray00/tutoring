def ncifre(val):
  # caso base
  if(val/10 < 1):
    return 1

  # passo induttivo
  else:
    return 1 + ncifre(val/10)
    
# __ main __
val = int(input("Inserisci un numero: "))
print("Ci sono " + str(ncifre(val)) + " cifre")