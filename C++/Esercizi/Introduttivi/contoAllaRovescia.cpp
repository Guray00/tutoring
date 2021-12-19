#include <iostream>
using namespace std;


/*
Effettuare il conto alla rovescia a partire da un numero inserito da tastiera compreso tra 30 e 100. esempio se il numero inserito è 40 occorre visualizzare 40, 39, 38,.....1
*/

int main(){
  int n;

  // chiediamo all'utente di inserire un numero compreso tra 30 e 100
  cout <<"Inserisci un numero compreso tra 30 e 100"<<endl;
  cin>>n;

  if (n >= 30 && n <= 100){ // compreso tra 30 e 100
      // for ( inizializzione; condizione; fine-ciclo)
      for (int i=n; i >=1; i = i-1){
        cout<<i<<" ";
      }
    
    
      // esempio con il while
      /*
      int i = n;
      while(i >=1){
        cout<<i<<" ";
        i = i-1;
      }*/
  }

  else {
      cout<<"numero non compreso nel range";
  }


	return 0;
}