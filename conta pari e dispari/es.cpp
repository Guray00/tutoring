#include <iostream>
using namespace std;

int main(){
  int n, num;  

  do{
    cout<<"inserire il numero di valori: ";
    cin >> n;

    // se hai sbagliato
    if(n <= 0){
      cout<<"Errore! Inserisci un valore positivo."<<endl<<endl;
    }
      
  } while(n <= 0);

  int pari = 0;
  int dispari = 0;
  
  // chiedere di inserire i valori
  for(int i=0; i < n ; i++){
    cout<<"inserisci un valore: ";
    cin>> num;
    
    // numero pari => quando il resto della divisione tra il numero e 2 deve essere 0
    if(num % 2 == 0){
      pari = pari + 1;
    } else {
      dispari = dispari + 1;
    }
  }
  
  cout<< "Pari totali: "<< pari <<endl;
  cout<< "Dispari totali: "<< dispari<<endl;
  
	return 0;
}