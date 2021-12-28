#include <iostream>
#include <time.h>

using namespace std;

int main(){

  int N,K;

  // dimmi il numero massimo di fiammiferi che vuoi inserire: -> n
  cout<<"Numero massimo di fiammiferi che vuoi inserire"<<endl;
  cin>>N;
  
  // dimmi quanti fiammiferi vuoi levare al massimo ad ogni turno
  cout<<"Quanti fiammiferi vuoi levare al massimo ad ogni turno"<<endl;
  cin>>K;

  int range = N - K + 1;

  // numero di fiammiferi che abbiamo -> x
  int x = rand()%range + K;

  int turni = 1;
  
  //finchè x > 0: fai qualcosa
  while(x > 0){
    int y;
    cout<<"Quanti fiammiferi vuoi levare?"<<endl;
    cin>>y;

    // controlla che stiamo levando al massimo K fiammiferi
    if(y <= K){
      x = x - y;
      turni = turni + 1; 
    }

    // se stiamo levando troppi fiammiferi, diamo errore
    else {
      cout << "devi levare meno fiammiferi"<<endl;
    }
    
  }

  
  cout<< "finito! ";
  if (turni%2 == 0){
    cout<<"Ha vinto il giocatore 2";
  }

  else {
    cout<<"Ha vinto il giocatore 1";
  }
  
	return 0;
}