"""noi abbiamo il saldo d'imposta
 -> se il saldo è negativo, non si paga => acconto = 0
 -> se il saldo è positivo
      -> saldo >= 50: acconto = 98% dell'importo
      -> saldo <  50: non paghiamo nulla => acconto = 0
"""

saldo = int(input("Saldo d'imposta: "))
importo = int(input("Importo: "))

if saldo < 0:
    acconto = 0
elif saldo >= 50:
    acconto = importo * 0.98
else:
    acconto = 0

print("Acconto: ", acconto)