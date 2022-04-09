#include <iostream>
#include <ctime>
using namespace std;



int main(){

  int n;
  int max = 10; // il numero max che generiamo

  cout<<"Quanti valori casuali vuoi creare? ";
  cin>> n;

  // sto creando il vettore
  int v[n];

  // devo inserire in un vettore n numeri casuali
  int conta;

  // serve per inizializzare i numeri casuali
  srand(time(NULL));


  // devo generare n numeri casuali
  for (conta = 0; conta < n; conta++ ){

    // voglio numeri casuali da 1 a max
    int casuale = rand()%max + 1;
    v[conta] = casuale;

  }

  // serve a mostrare a schermo il vettore
  for(conta = 0; conta < n; conta++){
    cout<<v[conta]<<" ";
  }

  cout<<endl;

  // il quadrato del contenuto del vettore
  for(conta = 0; conta < n; conta++){
    int quadrato = v[conta]*v[conta];
    cout<<quadrato<<" ";
  }
  
	return 0;

}