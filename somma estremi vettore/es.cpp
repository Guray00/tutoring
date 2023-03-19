#include <iostream>
using namespace std;

int main(){

  // dichiarazione del vettore (100 è fittizio)
  int vet[100], somma, dimensione, tmp;


  // fino a quando sbaglio, continuo a chiedere il valore
  do {
    // chiediamo quanto cassetti vogliamo usare
    cout<<"inserisci la dimensione del vettore: ";
    cin>>dimensione;

    if(dimensione%2 != 0 || dimensione <= 0){
      cout<<"Hai sbagliato! ";
    }
    
  } while(dimensione%2 != 0 || dimensione <= 0); // se il resto non è zero...

  // riempiamo i cassetti del vettore
  for(int i=0; i<dimensione; i=i+1){
    cout<<"inserisci un valore: ";
    cin>>tmp;
    vet[i]=tmp;
  }

  // sommo il primo elemento e l'ultimo elemento
  // primo elemento:  vet[0]
  // ultimo elemento: vet[dimensione-1]
  somma = vet[0] + vet[dimensione-1];
  cout<<"la somma vale: "<<somma;
  
  return 0;
}