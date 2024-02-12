#include <iostream>
using namespace std;

int main(){

  // usiamo una variabile contatore (cont) per contare i numeri dispari e positivi (parte da 0)
  int cont=0;
  int n;
  int numero;

  do{
    // mostriamo a schermo di inserire un numero per la quantità (n) 
    cout<<"Quanti numeri vuoi inserire? ";
  
    // prendo in input il valore di n
    cin >> n;
    
  } while(n <= 0);

  // azione ripetuta un numero definito (n) di volte
  for(int i=0; i<n; i++){

    // chiedo di inserire un valore
    cout << "inserire numero: ";

    // prendi in input il valore (numero)
    cin >> numero;

    // se il numero è positivo e dispari
    if(numero>0 && numero%2!=0){
      // conto il numero
      cont++;
    }
  
    
  }

  // mostro a schermo quanti numeri ho contato
  cout << "I numeri positivi e dispari contati sono "<< cont;

  return 0;
}
