#include <iostream>
using namespace std;

// calcolare media di n numeri e calcolare il prodotto
// di n numeri (inseriti).


int main(){

  int p, n, somma;
  float media;
  // n -> il numero di numeri che vuoi inserire
  
	cout<<"Quanti numeri vuoi inserire"<<endl;
  cin>>n;

  p = 1; // sennò non sappiamo da quanto parte
  somma = 0;
  

  for(int i=0; i<n; i=i+1){
    int temporaneo;
    cout<<"Inserisci un numero"<<endl;
    cin>>temporaneo;

    // come calcolo il prodotto
    p = temporaneo * p;

    // calcola la somma di tutti i numeri
    somma= temporaneo + somma;
    
  } 

  // il float serve per richiamare la diisione tra numeri
  // con la virgola. Senza fa la divisone tra numeri interi
  // che è a sua volta un numero intero.
  // Es: 5/2 per interi vale 2 mentre 2.5 per numeri con la virgola
  media = (float) somma/ (float)n;

  // prodotto di: 1*2*3*4*5
  // (1*2) * 3 * 4 * 5
  // ((1*2) *3) *4 * 5
  // (((1*2) * 3) *4) * 5
  
  
  cout<<"Il prodotto e': "<<p<<endl;
  cout<<"La media e': "<<media<<endl;
	
  return 0;
}

// int i = 0; i < 5; i++  -> 0 1 2 3 4
// int i = 1; i <= 5; i++ -> 1 2 3 4 5