eta = int(input("Scrivi l'età: "))

while eta < 0:
    eta = int(input("L'età è invalida. Scrivi di nuovo: "))
  
if eta >= 18:
    print("Sei maggiorenne.")
else:
    print("Sei minorenne.")
