# chiediamo di inserire un voto
voto = input("Inserisci un voto: ")

# Trasformiamo sempre in maiuscolo la lettera
# per riconoscere anche le minuscole
voto = voto.upper()

# se il voto è "A":
if voto=="A":
  # stampo "ottimo"
  print("ottimo")

# se il voto è "B":
elif voto == "B":
  # stampo "buono"
  print("buono")

elif voto == "C":
  print("sufficiente") 
  
elif voto=="D":
  print("insufficiente")

elif voto=="E":
  print("gravemente insufficiente")

# in tutti gli altri casi non è un voto valido
else:
  print("Non hai inserito un voto valido")
  
