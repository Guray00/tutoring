#include <iostream>
#include <time.h>
using namespace std;

int main(){

  int min = 1;
  int max = 6;
  int range = max - min + 1;
  int n;
  int conta = 0;

  srand(time(NULL));

  // chiediamo il numero a schermo
  cout<< "quante volte vuoi lanciare il dado? ";
  cin>> n;
  
  for(int i = 0; i < n; i++){
    int casuale = rand()%range + min;
    cout<< casuale << " ";

    // verifico se è uscito un 6.
    if (casuale == 6){
      conta++;
    }
  }

  cout << endl << endl;
  cout << "Il 6 è uscito " << conta << " volte"<<endl;
	
  return 0;
}