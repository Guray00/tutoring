# 1) quando finiamo? Quando il numero è dispari (n%2 != 0)
# 2) Ogni volta cosa facciamo?
#     - controllare se il numero è pari
#          - se lo è sommo


def sommaPari():
  val =int(input("inserisci un numero: "))

  # caso base, il numero è dispari
  if (val%2 != 0):
    return 0

  # caso induttivo, il numero è pari e va sommato
  else:
    return val + sommaPari()
            

# __main__
risultato = sommaPari();
print("La somma dei numeri pari inseriti vale: "+str(risultato))