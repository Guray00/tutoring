#include <iostream>
using namespace std;

int main(){
  int A,N, tot;
  
  // chiedo di inserire il valore di A
  cout<<"inserire valore di A: ";
  
  // faccio inserire il valore di A
  cin>>A;
  tot = A;
  
  // chiedo di inserire il valore di N
  cout<<"inserire valore di N: ";
  
  // faccio inserire il valore di N
  cin>>N;
    
  cout << "I multipli di " << A << " sono:"<<endl;

  while(tot<=N){
    cout << tot << ' ';
    tot = tot + A;
  }

	return 0;
}