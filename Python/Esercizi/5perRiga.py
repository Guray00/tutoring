# mostrare a schermo i numeri da 100 a 5, 5 numeri per riga

for i in range(100, 4, -1):
  print(i, end=" ")

  # la and impone che entrambe le cose siano verificate
  # e quindi serve per non andare a capo al 6, in quanto non
  # ser
  if (i%5==1 and i != 6):
    print()


# TABELLA AND
# cond1   cond2    risultato
# vero    vero     vero
# falso   vero     falso
# vero    falso    falso
# falso   falso    falso

# TABELLA OR
# cond1  cond2  risultato
# vero    vero   vero  
# vero    falso  vero
# falso   vero   vero
# falso   falso  falso