#include <iostream>
using namespace std;

int main(){
  float r, s;
  int n, i=0;
  
  // - L’utente inserisce un valore intero n
  cout<<"Inserisci un valore: ";
  cin>>n;
  
  // - il programma fa il valore assoluto di n 
  if(n<0){
    // moltiplicalo * -1
    n = n*(-1); 
  }

  // - chiede di inserire n numeri reali
  s = 1.0f;
  while(i<n){
    cout<<"Inserisci un numero reale: ";
    cin>>r;
    i=i+1;

    // calcolo il quadrato
    r=r*r;
    
    // - il programma calcola il prodotto dei quadrati
    s = s*r;
  }

  cout<<"Il prodotto dei quadrati dei numeri inseriti: "<<s<<endl;
  
  return 0;
}

