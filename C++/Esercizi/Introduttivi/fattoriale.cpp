#include <iostream>
using namespace std;

// fattoriale di un numero
int main(){
	//INIZIO
  unsigned int n,i,p; 

  // leggo n
  cin>>n;
  p=1;

  // calcolo il fattoriale
  for(i=1; i<=n; i=i+1){
    p=i*p;
  }

  
  cout<<p;
  
  // FINE
	return 0;
}