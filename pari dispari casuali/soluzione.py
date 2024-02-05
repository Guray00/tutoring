import random

def main():
    # Chiedi all'utente quanti numeri generare
    n = int(input("Quanti numeri vuoi generare? "))

    # Inizializza contatori per numeri pari e dispari
    numeri_pari = 0
    numeri_dispari = 0

    # Genera e stampa i numeri casuali compresi tra 1 e 1000
    for _ in range(n):
        numero = random.randint(1, 1000)
        print("Estratto:", numero)

        # Aggiorna i contatori per numeri pari e dispari
        if numero % 2 == 0:
            numeri_pari += 1
        else:
            numeri_dispari += 1

    # Stampa il numero di numeri pari e dispari
    print(f"Sono usciti {numeri_pari} numeri pari")
    print(f"Sono usciti {numeri_dispari} numeri dispari")

if __name__ == "__main__":
    main()
