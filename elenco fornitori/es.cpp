#include <iostream>
#define DIM 100

using namespace std;

struct prodotto {
  int codice;
  float importo;
};

int caricamento(prodotto elenco[]);
float calcolaPrezzoMedio(prodotto elenco[], int n, int fornitore);
bool controllato(int elenco[], int n, int fornitore);
void minmax(prodotto elenco[], int n, int& codiceMin, int& codiceMax);

int main() {
  int n; // dimensione del vettore di fornitori
  prodotto elenco[DIM];
  int controllati[DIM]; // elenco dei fornitori già controllati
  int cont_controllati = 0; // numero di fornitori già controllati

  // far inserire i dati dei fornitori
  n = caricamento(elenco);
  cout << endl << endl;

  // per ogni fornitore presente nell'elenco
  for (int i = 0; i < n; i++){

    // se NON è stato ancora calcolato il suo prezzo medio
    if (controllato(controllati, cont_controllati, elenco[i].codice) == false){

      // trovare il prezzo medio per fornitore
      int prezzomedio = calcolaPrezzoMedio(elenco, n, elenco[i].codice);
      cout<< "Il codice " << elenco[i].codice << " ha il prezzo medio di " << prezzomedio << endl;

      // mi "segno" che ho analizzato il fornitore in questione
      controllati[cont_controllati] = elenco[i].codice;
      cont_controllati++;
    }

  }


  int codiceMin, codiceMax;
  minmax(elenco, n, codiceMin, codiceMax);

  cout << "Fornitore con l'importo medio più basso: Codice " << codiceMin << endl;
  cout << "Fornitore con l'importo medio più alto: Codice " << codiceMax << endl;

  return 0;
}

// funzione che permette di inserire gli elementi nel vettore
int caricamento(prodotto elenco[]) {
  int i = 0;
  char risposta;

  do {
    // inserisce il codice del prodotto
    cout << "Inserisci il codice del prodotto: ";
    cin >> elenco[i].codice;

    cout << "Inserisci l'importo: ";
    cin >> elenco[i].importo;

    cout << "Vuoi inserire un altro prodotto? [s/n] ";
    cin >> risposta;

    i++;
  } while (risposta == 's' && i < DIM);

  return i;
}

// calcola il prezzo medio partendo dai prezzi dei singoli prodotti presenti
float calcolaPrezzoMedio(prodotto elenco[], int n, int fornitore) {
  float prezzomedio = 0;
  int cont = 0;

  // stiamo scorrendo tutti i prodotti
  for (int i = 0; i < n; i++) {
    // controllo se quello che guardo ha lo stesso codice del fornitore fornito
    if (elenco[i].codice == fornitore) {
      prezzomedio = prezzomedio + elenco[i].importo;
      cont++;
    }
  }

  // se trovo almeno un prodotto
  if (cont > 0) {
    // calcolo il prezzo medio
    prezzomedio = prezzomedio / cont;
  }

  return prezzomedio;
}

// funzione che controlla in un elenco se il fornitore è presente
bool controllato(int elenco[], int n, int fornitore) {
  for (int i = 0; i < n; i++) {
    // è vero, già controllato
    if (elenco[i] == fornitore) {
      return true;
    }
  }

  // non è ancora stato controllato
  return false;
}

// funzione per trovare il fornitore con importo medio più alto e più basso
void minmax(prodotto elenco[], int n, int& codiceMin, int& codiceMax) {
  codiceMin = elenco[0].codice;
  codiceMax = elenco[0].codice;

  float importoMedioMin = calcolaPrezzoMedio(elenco, n, codiceMin);
  float importoMedioMax = calcolaPrezzoMedio(elenco, n, codiceMax);

  for (int i = 1; i < n; i++) {
    int codiceFornitore = elenco[i].codice;
    float importoMedio = calcolaPrezzoMedio(elenco, n, codiceFornitore);

    if (importoMedio < importoMedioMin) {
      codiceMin = codiceFornitore;
      importoMedioMin = importoMedio;
    }

    if (importoMedio > importoMedioMax) {
      codiceMax = codiceFornitore;
      importoMedioMax = importoMedio;
    }
  }
}
