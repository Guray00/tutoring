#include <iostream>
using namespace std;

int main(){
    int n;
  
    cout<<"Inserisci un valore: ";
    cin>>n;
  
    int j=0; // quantità di numeri che rispettano il criterio
    int k=0; // quanti valori sono stati inseriti
  
    while(k<n){
      float v;
      cout<<"Iserisci un numero: ";
      cin>>v;

      // aggiorno il contatore
      k=k+1;

      // -4 <= v <= 4 equivale a dire che v >= -4 e v <= 4
      if(v >= -4 and v <= 4){
        j=j+1;
      }
    }
  
    cout<<"Ci sono "<<j<<" numeri compresi tra -4 e 4.";
}

