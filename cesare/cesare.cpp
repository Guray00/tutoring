#include <iostream>
using namespace std;


int main(){

  int n;
  cout<<"quanti caratteri vuoi inserire? "<<endl;
  cin>>n;
  
  char c [n];


  cout<<"Inserisci la frase da criptare con cesare: "<<endl;
  // prendiamo in input i caratteri
  for(int i=0; i < n; i++){
      cin>>c[i];
  }

  cout<<endl<<"Risultato: "<<endl;

  // stampiamo la codifica corrispondente a ciascun carattere
  for (int i=0; i<n; i++){
      //char(numero) <- converte un numero in carattere
      char out = int(c[i])+3;
      cout<<out;
  }
  
	return 0;
}