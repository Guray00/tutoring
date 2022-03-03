# scrivere un programma che chieda un numero
# n fornito in input e calcoli n punti casuali
# del piano cartesiano

# idea
# -> chiedere il numero

import random

def stampaPunto(x, y):
  print("(" + str(x) + ", " + str(y) + ")")
  # print("(", end="")
  # print(x,end="")
  # print(", ", end="")
  # print(y,end="")
  # print(")")


def funzione():
  # chiedo quanti punti voglio generare
  n=int(input("quanti punti vuoi generare: "))
  
  # genero n punti
  for i in range(n):
    numero_1 = random.randint(0, 100) # estremi scelti arbritrariamente
    numero_2 = random.randint(0, 100) # estremi scelti arbritrariamente
  
    #(numero_1, numero_2) => (5, 4)
    stampaPunto(numero_1, numero_2)


# ---- main ----
funzione()
