#include <iostream>
#include <string>
using namespace std;

int main(){
  string str;
  int conta = 0;
  
  // chiedere di inserire una stringa
  cout<<"inserisci una stringa: ";
  
  // salvare la stringa
  getline(cin, str);

  // --- contare i caratteri che non sono spazio nella stringa ---
  for(int i = 0; i < str.length(); i++){
    // se non è un carattere
    if(str[i] != ' '){
      // devo contare
      conta = conta + 1;
    }
  }
  
  cout << "Sono presenti " << conta << " carattreri"<<endl;
	
	return 0;
}