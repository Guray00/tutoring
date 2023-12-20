#include <iostream>
using namespace std;

int main(){
  int n, sum = 0;
  
  // scorro fino a quando il valore è > 10
  do{
    cout<<"inserisci un numero: ";
    cin>> n;

    // se il valore è maggiore di 10
    if(n > 10){
      sum = sum + n;
    }
      
  } while(n > 10);
    
  cout<<"La somma dei numeri maggiori di 10 vale "<<sum<<endl;
	return 0;
}