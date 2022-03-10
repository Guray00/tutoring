#include <iostream>
using namespace std;

int potenza(int a,int b){
  int somma=1;
  for(int i=0;i<b;i++){
    somma*=a;
  }
  return somma;
}

int main(){
  int n=0;
  cout<<"inserisci la lunghezza del vettore\n";
  cin>>n;
  int vettore[n],bit=0;
  bool controllo;
  for(int i=0;i<n;i++){
    do{
      controllo=false;
      cout<<"inserisci bit\n";
      cin>>bit;
      if(bit<0 || bit>1){
        controllo=true;
        cout<<"i bit possono essere 0 o 1";
      }
    }while(controllo);
    vettore[i]=bit;
  }
  int decimale=0;
  int p=0;
  for(int i=n-1;i>=0;i--){
    decimale+=vettore[i]*potenza(2,p);
    p++;
  }
  cout<<"il risultato è: "<<decimale;
	return 0;

}