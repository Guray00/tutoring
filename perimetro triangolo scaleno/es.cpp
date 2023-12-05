#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double b, h, p = 0;
  
  // inseriamo la base controllando che sia un valore positivo
  cout<<"Inserisci base: ";
  cin>>b;
  while(b<=0){
    cout<<"Errore! Reinserisci base: ";
    cin>>b;
  }

  // inseriamo l'altezza controllando che sia un valore positivo
  cout<<"Iserisci altezza: ";
  cin>>h;
  while(h<=0){
    cout<<"Errore! Reinserisci altezza: ";
    cin>>h;
  }

  float base1 = 3*(b)/4;
  float base2 =   (b)/4;

  float c1 =sqrt(pow(base1,2)+pow(h,2));
  float c2 =sqrt(pow(base2,2)+pow(h,2));
  p=c1+c2+b;
  
  cout<<"IL perimetro è: "<<p<<endl;
  
  
  return 0;
}