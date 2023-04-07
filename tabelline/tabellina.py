tabella = int(input("Quale tabellina vuoi mostrare? "))

for i in range(1, 11):
  prodotto = tabella * i
  print(str(tabella) + " * " + str(i) + "\t= " + str(prodotto))
  