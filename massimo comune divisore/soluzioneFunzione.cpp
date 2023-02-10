// variante con le funzioni

#include <iostream>
using namespace std;

/*
  20 30 => 10

  1) Trovare il più piccolo tra i due numeri

  2) Scorrere tutti i numeri cercando il divisore più grande,
     partendo da 1 (che so essere sempre divisore) fino al più piccolo
     tra i due

  3) a ogni passo controllo se il numero è un divisore per entrambi,
     se lo è, me lo salvo
*/

int MCD(int n1, int n2){
  int min, tot, tot1, mcd;

  // troviamo il più piccolo
  if(n1<n2){
    min=n1;
  }
  else 
    min=n2;

  
  for(int a = 1; a<=min;a++){
    tot=n1%a;  // verifichi se a è divisore per n1
    tot1=n2%a; // verifichi se a è divisore per n2
    if(tot==0 && tot1==0){ // se lo è per entrambi
      mcd=a; // salvarti il divore
    }
  }
  
  return mcd;
}

int main(){
  
  int n1, n2, ris;
  cout<<"Inserisci il primo numero: ";
  cin>>n1;

  cout<<"Inserisci il secondo numero: ";
  cin>>n2;

  ris = MCD(n1, n2);

  cout<<"Il massimo comune divisore e' " <<ris;

  return 0;

}