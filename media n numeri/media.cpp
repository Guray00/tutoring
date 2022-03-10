#include <iostream>
using namespace std;

int main(){
  int n=0,a=0;
  float somma=0;
  cout<<"inserisci il numero di cifre da inserire"<<"\n";
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<i+1<<": ";
    cin>>a;
    somma+=a;
  }
    cout<<"la media è: "<<somma/n;
  
	return 0;

}