# permette l'esecuzione continua del programma
while True:
  # prende in input il margine iniziale
  a = int(input("scrivi un numero intero: "))

  # prende in input il margine finale
  b = int(input("scrivi un numero intero diverso da a: "))

  # prende in input la stringa
  s = input("inserisci una stringa: ")

  # se viene inserito "E" il programma termina
  if s == "E":
    break

  # === controlli se l'input è giusto ===

  # voglio vedere SE la lunghezza di s è superiore a 2
  if len(s) < 2:
    print("Devi inserire almeno 2 caratteri!")
    continue

  # se a > b dico che è sbagliato
  if a > b:
    print("a non deve essere più grande di b!")
    continue

  # a deve essere maggiore o uguale 0
  if a < 0:
    print("a deve essere maggiore o uguale a 0!")
    continue

  # a non deve superare length - 1
  if a > len(s)-1:
    print("a non deve superare length - 1")
    continue

  # b non deve superare la lunghezza della stringa
  if b > len(s):
    print("b non deve superare la lunghezza della stringa!")
    continue

  # ==== input corretto se arrivo qua ====
  print("La stringa vale: " + s[a:b]);