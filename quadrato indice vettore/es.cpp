#include <iostream>
using namespace std;

// funzione che inizializza il vettore
void inizializzaVettore(int v[], int n){
  // per ogni cella della lunghezza
  for(int i=0; i<n;i++){
    // moltiplico per se stesso l'indice
    v[i]=i*i;
  }
}

// funzione che stampa il vettore
void stampaVettore(int v[], int n){
  // per ogni elemento elemento del vettore
  for(int i=0; i<n;i++){
    cout<<v[i]<<" ";  // mostro l'elemento della scarpiera
  }
}


int main(){
  int n;
  int v[100];

  do{
    cout<<"Inserisci una lunghezza: ";
    cin>>n;

    // se è < 0
    if(n < 0 || n > 100){
      // faccio apparire a schermo un messaggio di errore
      cout << "Inserisci un numero positivo minore di 100!"<<endl<<endl;
    }
  } while(n<=0 || n>100);

  // chiamiamo la funzione per inizializzare
  inizializzaVettore(v, n);
  stampaVettore(v, n);
	
  return 0;
}