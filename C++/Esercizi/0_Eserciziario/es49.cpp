#include <iostream>
using namespace std;

// 48. Scrivere un algoritmo che visualizza i numeri naturali dispari da 3 a 21.

int main(){
  // for (inizializzazione; condizione; fine sottociclo)

  for(int i=3 ;i<=21;i=i+2){
    cout<<i<<endl;
  }

  /*
  for(int i=3 ;i<=21;i=i+1){
    if(i%2 != 0){ // controlliamo se è dispari
      cout<<i<<endl;
    }
  }
  */
  
	return 0;

}