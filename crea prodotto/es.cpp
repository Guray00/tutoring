#include <iostream>
using namespace std;
#define DIM 100

struct Data {
  int giorno;
  int mese;
  int anno;
};

struct Prodotto {
  string nome;
  string marca;
  float prezzo;
  int quantita;
  Data data;
};

// funzione che fa inserire le info di un prodotto e le ritorna
Prodotto inserisciProdotto();
void stampaProdotto(Prodotto p);

int main(){
  int n;
  Prodotto vet[DIM];
  
  // inseriamo le info di un prodotto
  cout << "Quanti prodotti vuoi inserire? ";
  cin >> n;

  for (int i = 0; i < n; i++){
    // inseriamo le info di un prodotto
    Prodotto tmp = inserisciProdotto();
    vet[i]=tmp;
  }

  for (int i = 0; i < n; i++){
    // stampo le informazioni del prodotto i-esimo
    stampaProdotto(vet[i]);
  }
  
  return 0;
}


// funzione che permette di inserire le info di un prodotto
Prodotto inserisciProdotto() {
  Prodotto tmp;
  cout<< "Inserisci il nome: ";
  cin >> tmp.nome;

  cout << "Inserisci la marca: ";
  cin >> tmp.marca;

  cout << "Inserisci il prezzo: ";
  cin >> tmp.prezzo;

  cout << "Inserisci la quantita: ";
  cin >> tmp.quantita;
  
  cout << "Inserisci l'anno di scadenza: ";
  cin >> tmp.data.anno;
  
  cout << "Inserisci il mese di scadenza: ";
  cin >> tmp.data.mese;
  
  cout << "Inserisci giorno di scadenza: ";
  cin >> tmp.data.giorno;

  cout << endl;
  
  return tmp;
}

void stampaProdotto(Prodotto p){
  cout << "[" << p.marca << "] " << p.nome << endl;
  cout << "Prezzo unitario: " << p.prezzo << " euro" << endl;
  cout << "Quantità: " << p.quantita << endl;
  cout << "Scadenza: " << p.data.giorno  << "/" << p.data.mese << "/" << p.data.anno << endl;
  cout << "Totale: " << p.quantita * p.prezzo << " euro" << endl;
  cout << endl;
}