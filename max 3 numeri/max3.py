n1 = int(input("Inserisci il primo numero: "))
n2 = int(input("Inserisci il secondo numero: "))
n3 = int(input("Inserisci il terzo numero: "))

if n1 > n2:
    if n1 > n3:
        print("Il più grande è: " + str(n1))
    else:
        print("Il più grande è: " + str(n3))
else:
    if n2 > n3:
        print("Il più grande è: " + str(n2))
    else:
        print("Il più grande è: " + str(n3))
