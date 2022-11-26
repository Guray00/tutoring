TipoOperazione = input("Inserisci il tipo di operazione: ")
saldo = float(input("Inserisci il saldo: "))
importo = float(input("Inserisci l'importo: "))

if TipoOperazione == 'd':
    saldo += importo
elif TipoOperazione == 'a' or TipoOperazione == 's':
    if saldo >= importo:
        saldo -=  importo
    else:
        print("Saldo insufficiente")
else:
    print("Tipo di operazione non valido")

saldo -= 10

print("Saldo: ", saldo)