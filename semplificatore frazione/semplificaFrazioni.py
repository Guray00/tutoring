def MCD(x, y):
    while y != 0:
        x, y = y, x % y
    return x

def SemplificaFrazioni(num, den):
    mcd = MCD(num, den)
    num /= mcd
    den /= mcd
    #ricordiamo che python ci permette di ritornare più di un valore
    return num, den

#qui inizia il main
num = int(input("Inserisci il numeratore: "))
den = int(input("Inserisci il denominatore: "))

oldDen = den
oldNum = num

num, den = SemplificaFrazioni(num, den)
if oldNum == num:
    print("La frazione è già semplificata")
else:
    print("La frazione", oldNum, "/", oldDen, "si può semplificare in", int(num), "/", int(den))