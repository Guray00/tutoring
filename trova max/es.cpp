#include <iostream>
using namespace std;

int main(){
  int n;
  int i;
  float numero;
  float max;

  // prendiamo in input il numero
  cout<<"Quanti numeri vuoi inserire? ";
  cin>>n;
  
  i=0;
  while(i<n){
    // prendo in ingresso il numero
    cout<<"Inserisci un numero: ";
    cin>>numero;
    
    if(i==0){
      max=numero;
    }
    else {
      if(numero>max){
        max=numero;
      }
    }
      
    i = i + 1;
  }
	
  cout<<"Il numero massimo vale "<<max<<endl;
  
  return 0;
}