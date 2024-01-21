#include <iostream>
#include <ctime>

using namespace std;

int main(){
  // necessario per generare valori casuali
  srand(time(NULL));

  // che la somma dei valori generati non è divisibile per 23
  // finchè somma non è divisibile per 23
  // while(somma%23 != 0)

  int somma = 0;
  int conta = 0;

  do{
    int x;
    x = rand() % 100;
    somma = somma + x;
    conta = conta + 1;
    cout << "somma: " <<somma << " conta: " << conta<<endl;
  } while(somma%23 != 0);
  
  cout<<endl<<"Sono servite "<< conta << " iterazioni" <<endl;
 
	return 0;
}