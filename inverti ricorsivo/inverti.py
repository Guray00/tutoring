# 123 => 3 2 1
# 1*100 + 2*10 + 3*1

# 123 / 10 => 12 RESTO 3
#             12/10 => 1 RESTO 2
#                      1/10 => 0 RESTO 1  

# quale è il caso base? quando si ferma il programma?
# Quando il risultato della divisione è zero, perchè non avrebbe
# senso continuare a dividere lo zero

def inverti(n):

  # caso base
  if(n == 0):
    return

  # passo induttivo
  else:
    tmp = n%10
    print(str(tmp), end="")
    inverti(n//10)

# --- main ---
n = int(input("Inserisci un numero: "))
inverti(n)