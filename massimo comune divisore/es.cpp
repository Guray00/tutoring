#include <iostream>
using namespace std;

int main(){
  int a=0,b=0, min=0, MCD=2, controllo=false;
  cout<<"inserisci il primo numero"<<"\n";
  cin>>a;
  cout<<"inserisci il seondo numero"<<"\n";
  cin>>b;
  if(a<=b){
    min=a;
  }else{
    min=b;
  }
  while(MCD<=min){
    if(b%MCD==0 && a%MCD==0){
      controllo=true;
      break;
    }
    MCD++;
  }
  if(controllo==false){
    MCD=1;
  }
  cout<<"il massimo comune divisore tra "<<a<<" e "<<b<<" è "<<MCD;
	return 0;

}