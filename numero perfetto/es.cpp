#include <iostream>
using namespace std;

int main(){
  int a=0,somma=0;
  cout<<"inserisci il numero\n";
  cin>>a;
  for(int i=1;i<a;i++){
    if(a%i==0){
      somma+=i;
    }
  }
  if(somma==a){
    cout<<a<<" è un unmero perfetto";
  }else{
    cout<<a<<" non è un numero perfetto";
  }
	return 0;

}