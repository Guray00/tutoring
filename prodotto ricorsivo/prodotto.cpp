#include <iostream>
using namespace std;

/*
scrivere una funzione ricorsiva che calcoli il prodotto sfruttando la seguente definizione induttiva:

se y = 0 => return 0
se y > 0 => return somma(x, prodotto(x, y-1))

*/


int somma(int n1, int n2){  
  if (n2==0){
    return n1;    
  }

  else {
    return 1 + somma(n1, n2-1); 
  }
}


int prodotto(int n1, int n2){
  if (n2==0)
    return 0;
    
  else {return somma (n1, prodotto(n1, n2-1)); }
}




int main(){
  int n1, n2;
  
  cout<<"Inserire il primo numero: ";
  cin>>n1;

  cout<<"Inserire il secondo numero: ";
  cin>>n2;

  int risultato = prodotto(n1, n2);
  cout<<risultato<<endl;
  
	return 0;

}