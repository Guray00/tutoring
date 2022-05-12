# soluzione con funzioni

def calcolo(n):
  totpos=0
  sommapos=0
  totneg=0
  sommaneg=0

  # faccio i calcoli
  for i in range(n):
    # prendo in input il numero
    num=int(input("inserisci un numero: "))
            
    if (num>=0):
      totpos=totpos+1
      sommapos=num+sommapos
    
    else:
      totneg=totneg+1
      sommaneg=num+sommaneg

  # se non ho messo positivi
  if (totpos == 0):
    # allora totpos = 1 => 0/1 => 0
    totpos = 1

  if (totneg == 0):
    totneg = 1
    
  mediapos=sommapos/totpos
  medianeg=sommaneg/totneg

  # stampo i risulto
  print("la media dei numeri positivi è: " + str(mediapos))
  print("la media dei numeri negativi è: " + str(medianeg))


    


# __main__
n=int(input("Quanti numeri vuoi inserire? "))
calcolo(n)