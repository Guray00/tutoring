

num = int(input("Inserisci un numero: "))
divisori = 0

for n in range(2, num):
    if num%n == 0:
        divisori += 1

if divisori == 0 and num != 1:
    print("Numero primo")
else:
    print("Numero non primo")