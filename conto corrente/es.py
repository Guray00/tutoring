class Conto:
  # costruttore della classe
  def __init__(self, nome, cognome, data, saldo):
    self.nome = nome
    self.cognome = cognome
    self.data  = data
    self.saldo = saldo

  def getSaldo(self):
    # restituire il saldo
    return self.saldo

  # funzione che permette di prelevare denaro
  def prelievo(self, q):
    # controllare se ci sono sono abbastanza soldi
    if q > self.saldo:
      print("non ci sono abbastanza soldi")
    else:
      self.saldo = self.saldo - q 
      print("prelevato " + str(q))

  # funzione che faccia depositare del denaro
  def deposito(self, d):
    self.saldo = self.saldo + d
    print("depositato " + str(d))
  

  def __str__(self):
    return "Nome: " + self.nome + "\nCognome: " + self.cognome + "\nData di nascita: " + self.data + "\nSaldo: " + str(self.saldo)


def main():
  c = Conto("Mario", "Rossi", "4 feb 2000", 100)
  print(c)
  print("il saldo vale " + str(c.getSaldo()))
  c.prelievo(150)
  c.prelievo(10)
  print("il saldo vale " + str(c.getSaldo()))
  c.deposito(40)
  print("il saldo vale " + str(c.getSaldo()))


main()