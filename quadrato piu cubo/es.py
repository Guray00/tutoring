# N = 10 
#   => 3^2 + 1^3 = 10 
#   => 1^3 + 2^2 = 5

# N = 15
#   => 2^3 + 2^2 = 12
#   => 3^2 + 1^3 = 10
#   => 12
 

# funzione che cerca il più grande quadrato dato un numero e il
# corrispettivo cubo
def trovaMaxQuadrato(n):

  # creiamo una scatola con dentro un valore
  i=1
  
  # i^2 è più piccolo di n
  while(i**2<=n):
    # "vado avanti con i numeri" => aggiungendo 1 ad i
    i+=1

  # "un numero indietro rispetto a i è quello giusto"  
  i = i - 1

  # sottrarre ad n il quadrato trovato
  rimasto = n - (i**2)
  j = 0

  # trovo il cubo in base a quanto è rimasto
  while(j**3<=rimasto):
    j+=1
    

  # j è troppo grosso, lo diminuisco di 1
  j -= 1

  # calcoliamo la somma finale
  somma = i**2 + j**3  

  # restiusco "silenziosamente" il valore
  return somma
  
  
# funzione che cerca il più grande cubo dato un numero e il
# corrispettivo quadrato
def trovaMaxCubo(n):

  # creiamo una scatola con dentro un valore
  i=1
  
  # i^2 è più piccolo di n
  while(i**3<=n):
    # "vado avanti con i numeri" => aggiungendo 1 ad i
    i+=1

  # "un numero indietro rispetto a i è quello giusto"  
  i = i - 1

  # sottrarre ad n il quadrato trovato
  rimasto = n - (i**3)
  j = 0

  # trovo il cubo in base a quanto è rimasto
  while(j**2<=rimasto):
    j+=1

  # j è troppo grosso, lo diminuisco di 1
  j -= 1

  # calcoliamo la somma finale
  somma = i**3 + j**2

  # restiusco "silenziosamente" il valore
  return somma
  


# ============================ MAIN ============================

# chiediamo di inserire a schermo il valore N
N = int(input("Inserisci il valore di N: "))

# calcoliamo la somma con il quadrato maggiore
# lo facciamo utilizzando la funzione che abbiamo costruito sopra
risultato1 = trovaMaxQuadrato(N)
risultato2 = trovaMaxCubo(N)

# dei due risultati, voglio mostrare a schermo
# solamente il risultato giusto
if risultato1 > risultato2:
  print ("Il più grande 'quadrato + cubo' vale " + str(risultato1))

else:
  print ("Il più grande 'quadrato + cubo' vale " + str(risultato2))
  