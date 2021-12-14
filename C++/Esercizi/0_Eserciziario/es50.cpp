#include <iostream>
using namespace std;

// 50. Scrivere un algoritmo che visualizza in ordine decrescente i numeri pari positivi inferiori a 50.

int main(){
  // for (inizializzazione; condizione; fine sottociclo)
  for(int i=50;i>=0;i=i-1){

    if(i%2==0){

      cout<<i<<endl;
    }

  }
  
	return 0;

}