#include <iostream>
using namespace std;

int main(){
  int n=0,a=0,countPositivi=0, countNegativi=0;
  float sommaNegativi=0, sommaPositivi=0;
  cout<<"inserisci il numero di cifre da inserire"<<"\n";
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<i+1<<": ";
    cin>>a;
    if(a>0){
      sommaPositivi+=a;
      countPositivi++;
    }
    else{
      sommaNegativi+=a;
      countNegativi++;
    }
  }
    cout<<"la media dei numeri positivi è: "<<sommaPositivi/countPositivi<<"\n";
  cout<<"la media dei numeri negativi è: "<<sommaNegativi/countNegativi;
	return 0;

}