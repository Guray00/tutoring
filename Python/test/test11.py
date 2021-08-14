# fare un programma che chiede in input il lato di un triangolo equilatero
# e calcolare il perimetro del triangolo tramite una funzione
# stampare a schermo l'area

def calcola_perimetro_triangolo(lato):
  perimetro=lato*3
  return perimetro


lato = input("inserisci il lato di un triangolo equilatero")
lato = int(lato)
perimetro=calcola_perimetro_triangolo(lato)
print(f"il perimetro vale{perimetro}")