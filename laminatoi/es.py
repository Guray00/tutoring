def calcolaSpessore(n,s):
  for i in range(n):
    p = s * 0.1
    s = s-p

  return s


def calcolaLaminatoi(s,f):
  conta=0
  while(s>f):
    p = s * 0.1
    s = s - p
    conta=conta+1
    
  return conta
    
    

  
# PARTE A
s=int(input("inserisci lo spessore: "))
n=int(input("inserisci il numero di laminatoi: "))

risultato1 = calcolaSpessore(n, s)
print("lo spessore finale è di "+str(risultato1))


# PARTE B
s=int(input("\ninserisci lo spessore: "))
f=float(input("inserisci lo spessore desiderato: "))

risultato2 = calcolaLaminatoi(s, f)
print("Saranno necessari " + str(risultato2) + " laminatoi")
