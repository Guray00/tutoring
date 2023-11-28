#include <iostream>
using namespace std;

int somma(int a, int b){
  // caso base
  if(b==0){
    return 0;
  }
  // caso ricorsivo 
  else{
    return somma(a, b-1)+a;
  }
}

int main(){
  int n1, n2;

  cout<<"Inserire il primo numero: ";
  cin>>n1;

  cout<<"Inserire il secondo numero: ";
  cin>>n2;

  int risultato = somma(n1, n2);
  cout<<risultato<<endl;

  return 0;
}