#include <iostream>
using namespace std;

int main(){
  char c;
  
  cout << "Inserisci una serie di caratteri: "; 
  
  do{
    cin>>c;

    // controlli se fa parte dell'alfabeto minuscolo
    if(c >= 'a' && c <= 'z'){
      // stampo in maiuscolo
      cout << (char)(c-32) <<endl;
    }

    else if(c>='A' && c <= 'Z'){
      cout << (char)(c+32)<<endl;
    }

  } while(c != '-');
  
	return 0;
}