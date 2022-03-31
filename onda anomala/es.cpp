#include <iostream>
using namespace std;

/* creo la funzione altezzaFinale
    - Tipo di ritorno: float
    - Parametri: h (float), k (float)
*/
float altezzafinale(float h, float k){  
  for(int i=0;i<k;i++){
    h=h/2;
  }
  if(h<1){
    h=0;
  }
    
  return h;
}

float altezzafine(float h){ 
  int cont=0;
  
  // fare un ciclo che dimezza a ogni passaggio
  // e che controlla se h = 0
  while(h>1){
    h=h/2;
    cont++;
  }
    
  return cont;
}

int main(){
  float h,k,a, km;
  
  // mi servono h e k
  cout<<"Inserire l'altezza: "<<endl;
  cin>>h;
  
  cout<<"Inserire la distanza: "<<endl;
  cin>>k;
  
  a=altezzafinale(h,k);
  cout<<"l'altezza finale e' "<<a<<" metri\n";

  km = altezzafine(h);
  cout<<"I km necessari per farla annullare sono "<<km<<"\n";
  
	return 0;

}