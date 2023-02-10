num = 0
cod = input("Inserire binario: ")

for n in range(0, len(cod)):
    # Prende gli elementi al contrario, li moltiplica per 2^indice e li somma
    num += int(cod[len(cod)-n-1])*(2**n)

print(num)