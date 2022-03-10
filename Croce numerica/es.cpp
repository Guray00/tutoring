#include <iostream>
using namespace std;

int main(){
  int n;
  bool controllo=false;
  do{
    cout<<"inserisci la dimensione\n";
    cin>>n;
    if(n%2==1){
      controllo=true;
    }
  }while(!controllo);
  
  
  for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==i || j==n-i+1)
                cout<<i;
            else
                cout<<" ";
        }

        cout<<"\n";
    }
	return 0;

}