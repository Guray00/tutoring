#prendo la frase da decifrare in input
x = input("Inserisci la frase da cifrare: ")

#creo una lista lunga quanto la frase
y = list(range(len(x)))

#modifico la lista con la frase cifrata
for i in range(len(x)):
    #se il carattere i-esimo non è una lettera non lo modifico
    if x[i].isalpha() == False:
        y[i] = x[i]  
        continue
    #altrimenti lo interpreto come carattere ASCII e lo incremento di 3
    y[i] = chr(ord(x[i])+3)

#stampo la lista senza parentesi quadre e virgole
print("".join(y))

