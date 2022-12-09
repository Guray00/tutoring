#include <iostream>
using namespace std;

// funzione che raddoppia un numero
// passato per riferimento
void raddoppia(int &a){
  cout<<"Dentro raddoppia(): Indirizzo di a: "<<&a<<endl;
  cout<<"Dentro raddoppia(): "<<a<<endl;
  a = a*2;
  cout<<"Dentro raddoppia(): "<<a<<endl;
}


int main(){
  int n;

  cout<<"Inserisci un numero: ";
  cin>>n;

  cout<<"Indirizzo di n: ";
  cout<<&n<<endl;
  
  raddoppia(n);
  cout<<"Nuovo valore di n: "<<n<<endl;
   
	return 0;
}