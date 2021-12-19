/*scrivere un programma che, preso in input un vettore di caratteri, realizzi un secondo vettore di puntatori a carattere in cui ciascuna cella punta alla cella corrispondente della stringa inserita*/

#include<string>
#include <iostream>
using namespace std;


int main(){

	char str1[5];
	char* str2[5];

	// qua prendiamo in input i valori
	cout<<"Inserisci 5 caratteri: ";
	for(int i=0; i<5;i++){
    cin>>str1[i];
  }

  // copiamo i riferimento
  for(int i=0; i<5;i++){
    str2[i] = &str1[i];
    
  }

  cout<<"Adesso faccio la stampa di quello che hai scritto: "<<endl;

	// stampiamo
  for(int i=0; i<5;i++){
    cout<<*str2[i];
  }

	return 0;
}