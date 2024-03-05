#include <iostream>
using namespace std;

int main(){
  char x, y;
  
  cout<< "Inserisci un carattere: ";
  cin>>x;
    
  cout<< "Inserisci un carattere: ";
  cin>>y;

  // se sono entrambe cifre
  if(x>='0'&& x<='9' && y >= '0' && y<='9'){
    // convertiamo in valore intero
    cout<<"la somma delle cifre è: "<<(x-48)+(y-48)<<endl;
  } 
  else{
    cout << "Non sono delle cifre";
  }
  
	return 0;
}