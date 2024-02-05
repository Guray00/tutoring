def main():
  # Chiedi all'utente di inserire la lunghezza del vettore (massimo 20)
  while True:
      n = int(input("Inserisci la lunghezza del vettore (max 20): "))
      if 0 < n <= 20:
          break
      else:
          print("La lunghezza del vettore deve essere compresa tra 1 e 20.")

  # Inizializza il vettore V
  v = []

  # Popola il vettore V con valori inseriti dall'utente
  for i in range(n):
      elemento = int(input(f"V[{i}]: "))
      v.append(elemento)

  # Chiedi all'utente di inserire la soglia X
  x = int(input("Inserisci la soglia x: "))

  # Inizializza il vettore V2 e il contatore di elementi copiati
  v2 = []
  contatore_copiati = 0

  # Copia gli elementi di V in V2 se sono inferiori alla soglia X
  for elemento in v:
      if elemento < x:
          v2.append(elemento)
          contatore_copiati += 1

  # Stampa il vettore V
  print("V:", " ".join(map(str, v)))

  # Stampa il vettore V2
  print("V2:", " ".join(map(str, v2)))

  # Stampa il numero di elementi copiati
  print(f"Numero di elementi copiati: {contatore_copiati}")

if __name__ == "__main__":
  main()
