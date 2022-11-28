x = input("Inserisci una parola:")
count = 0
for i in range(len(x)):
    if x[i] in "aeiou":
        count += 1
print("Numero di vocali:", count)