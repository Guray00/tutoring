#include <iostream>
using namespace std;


int main(){

  int n;

  cout<<"Inserire la dimensione dei vettori: ";
  cin>> n;

  int v1[n], v2[n];

  for (int i = 0; i < n; i++){
    cout<<"Inserisci l'elemento: ";
    cin>>v1[i];
  }

  for (int i = 0; i < n; i++){
    v2[i]=v1[i];
  }

  cout<<"V1: ";
  for (int i = 0; i < n; i++){
    cout<<v1[i]<<" ";
  }

  cout<<endl<<"V2: ";
  for (int i = 0; i < n; i++){
    cout<<v2[i]<<" ";
  }
  
	return 0;

}