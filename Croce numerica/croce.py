n = 0

# Chiede n fino a che non è un numero dispari positivo
while n%2==0 or n<0:
    n = input("Inserire la dimensione: ")
    n = int(n)

# Crea le righe
for i in range(1, n+1): 
    # Crea le colonne
    for j in range(1, n+1):
        # Scrive solo se è la i-esima o la i-ultima colonna
        if j==i or j==n-i+1:
            print(i, end="")
        else:
            print(" ", end="")
    print()