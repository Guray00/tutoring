def calcola_T(n):
  # Calcola T(n) = 0 + 1 + 2 + 3 + ... + n
  risultato = 0
  for i in range(n + 1):
      risultato += i
  return risultato

def calcola_Q(n):
  # Calcola Q(n) = 1 + 3 + 5 + 7 + ... + (2n - 1)
  risultato = 0
  for i in range(1, 2 * n, 2):
      risultato += i
  return risultato

def calcola_P(n):
  # Calcola P(n) = 1 + 4 + 7 + ... + (3n - 2)
  risultato = 0
  for i in range(1, 3 * n, 3):
      risultato += i
  return risultato

def main():
  # Input dell'utente
  n = int(input("Inserisci un numero intero n > 0: "))

  # Verifica che l'input sia valido
  while n <= 0:
      print("Il numero inserito deve essere maggiore di 0.")
      n = int(input("Inserisci un numero intero n > 0: "))

  # Calcola e stampa i risultati
  risultato_T = calcola_T(n)
  risultato_Q = calcola_Q(n)
  risultato_P = calcola_P(n)

  print(f"T({n}): {risultato_T}")
  print(f"Q({n}): {risultato_Q}")
  print(f"P({n}): {risultato_P}")

if __name__ == "__main__":
  main()
