def converti(d,m):
  risultato = 0
  # se metto mil, allora => risultato = d * 0,0000254 m
  if (m == "mil"):
    risultato = d * 0.0000254 

  elif (m == "linea"):
    risultato = d * 0.000635 

  elif (m == "pollice"):
    risultato = d * 25.0004 

  elif (m == "mano"):
    risultato = d * 101.0006 

  elif (m == "spanna"):
    risultato = d * 228.0006 

  elif (m == "piede"):
    risultato = d * 304.0008 
    
  elif (m == "gomito"):
    risultato = d * 457.0002 

  elif (m == "iarda"):
    risultato = d * 914.0004 

  elif (m == "braccio"):
    risultato = d * 1.8288 

  elif (m == "barra"):
    risultato = d * 5.0292 

  elif (m == "catena"):
    risultato = d * 20.1168 

  elif (m == "furlong"):
    risultato = d * 201.168 

  elif (m == "miglio"):
    risultato = d * 1609.344 

  return risultato

# __main__
num = int(input("inserisci la distanza: "))
misura = input("inserisci l'unità di misura: ")
print("risultato: "+ str(converti(num, misura)))