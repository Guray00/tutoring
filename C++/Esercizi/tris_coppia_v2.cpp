#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

/*
Esercizio: inserire 3 numeri interi da 2 a 10. 
Se i valori sono uguali visualizza "tris"; se solo due di 
essi sono uguali visualizza "coppia".
*/

// fare questo esercizio uguale, ma invece di uscire quando un
// numero è sbagliato, richiederlo fino a quando è giusto (CICLO)

int main(){
  int a,b,c;
  
  // chiediamo 3 numeri al nostro utente
  cout<<"-- Inserisci tre numeri --"<<endl;
  cout<<"Inserisci il primo numero"<<endl;
  cin>>a;

  while (a<2 || a > 10){
    cout<<"Hai sbagliato a inserire, riscrivilo"<<endl;
    cin>>a;
  }

  cout<<"Inserisci il secondo numero"<<endl;
  cin>>b;

  while (b<2 || b > 10){
    cout<<"Hai sbagliato a inserire, riscrivilo"<<endl;
    cin>>b;
  }

  cout<<"Inserisci il terzo numero"<<endl;
  cin>>c;

  while (c<2 || c > 10){
    cout<<"Hai sbagliato a inserire, riscrivilo"<<endl;
    cin>>c;
  }
  
  // caso in cui troviamo un tris
  if((a == b) && (b == c)){
    cout<<"Tris"<<endl;
  }

  // condizioni per trovare una coppia
  else if ((a == b) && (b != c)){
    cout<<"Coppia"<<endl;
  }

  // condizioni per trovare una coppia
  else if ((a != b) && (a == c)){
    cout<<"Coppia"<<endl;
  }

  // condizioni per trovare una coppia
  else if ((a != c) && (b == c)){
    cout<<"Coppia"<<endl;
  }

  // in tutti gli altri casi, quindi non abbiamo trovato
  // ne coppie ne tris
  else {
    cout<<"Non ci sono ne tris ne coppie";
  }
  
	return 0;
}