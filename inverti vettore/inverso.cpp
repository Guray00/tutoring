#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"Inserisci dimensione: ";
  cin>>n;

  int v[n];

  for(int i=0;i<n;i++){
    int tmp;
    cout<<"Inserisci valore: ";
    cin>>tmp;
    v[i]=tmp;
  }

  // 4 => 3...0 
  for(int i=n-1;i>=0;i--){
    cout<<v[i]<<" ";
  }
  
	return 0;

}