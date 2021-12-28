#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std; 

/* COMANDO
genera 2 numeri casuali
da 1 a 6 corrispondenti alle facce di
due dati. il giocatore vince se la somma dei
due dadi è 7 oppure 5.
*/

int main(){
  int max=6,min=1;
  int range =max-min+1;

  srand(time(0));
  
  // estrae un primo numero casuale 
  int numero1 = rand()%range + min;
  int numero2 = rand()%range + min;

  cout<<numero1<<endl;
  cout<<numero2<<endl;

  if((numero1+numero2==7) ||(numero1+numero2==5)){
    cout<<"HAI VINTO"<<endl;
  }
  else{
    cout<<"HAI PERSO"<<endl;
  }

	return 0;
}