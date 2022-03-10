#include <iostream>
using namespace std;

int main(){
  bool controllo=false;
  int n=0;
	cout<<"inserisci il numero\n";
  cin>>n;
  for(int i=2;i<n/2;i++){
    if(n%i==0){
      controllo=true;
      break;
    }
  }
  if(controllo ){
    cout<<n<<" non è un numero primo\n";
  }else{
    cout<<n<<" è un numero primo\n";
  }
	return 0;

}