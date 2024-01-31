# inserisci gli elementi nella prima lista
l1 = []
l2 = []

n = int(input("Inserisci la dimensione della prima lista: "))

# un ciclo che itera n volte
for i in range(n):

  # chiedo un elemento
  elemento = int(input("inserisci un numero: "))

  # metto l'elemento nella lista
  l1.append(elemento)

# ------------------------

n = int(input("\nInserisci la dimensione della seconda lista: "))
# un ciclo che itera n volte
for i in range(n):

  # chiedo un elemento
  elemento = int(input("inserisci un numero: "))

  # metto l'elemento nella lista
  l2.append(elemento)

l3 = []
index  = 0
limite = min(len(l1), len(l2)) # 3

# per ogni indice fino al limite
for i in range(limite):
 l3.append(l1[i]) # appendo dalla prima lista
 l3.append(l2[i]) # appendo dalla seconda lista

if len(l1) > len(l2):
  # per ogni cosa rimasta in l1 (j indice)
  for j in range(i,len(l1)):
    l3.append(l1[j])

elif len(l2) > len(l1):
  # per ogni cosa rimasta in l2 (j indice)
  for j in range(i+1,len(l2)):
    l3.append(l2[j])

print()
print(l3)