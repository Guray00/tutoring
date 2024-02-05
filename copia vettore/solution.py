def main():
  # Chiedi all'utente di inserire 5 numeri
  numeri = input("Inserisci 5 numeri separati da spazi: ").split()

  # Verifica che siano stati inseriti esattamente 5 numeri
  if len(numeri) != 5:
      print("Devi inserire esattamente 5 numeri.")
      return

  # Converte gli input in interi
  vettore1 = [int(numero) for numero in numeri]

  # Copia i numeri in un secondo vettore (vettore2)
  vettore2 = vettore1.copy()

  # Stampa il contenuto di entrambi i vettori
  print("Vettore1:", " ".join(map(str, vettore1)))
  print("Vettore2:", " ".join(map(str, vettore2)))

  # Salva i numeri in ordine inverso nel secondo vettore
  vettore2.reverse()

  # Stampa il contenuto del secondo vettore (in ordine inverso)
  print("Vettore2 (in ordine inverso):", " ".join(map(str, vettore2)))

if __name__ == "__main__":
  main()
