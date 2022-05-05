def tempo(d):
  VELOCITA = 299792458
  t=d/VELOCITA
  return t

# __main__
d=int(input("inserisci la distanza in Km: "))
print("il tempo necessario è: " + str(tempo(d)))