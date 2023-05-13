#include <iostream>
#include <cstring>
using namespace std;

#define N 100

int main(){
  
  int conta=0, i, I; 

  // definiamo la stringa da prendere in input
  char stringa[N];
  
  cout<<"Inserire una stringa: ";

  // prendiamo in input una frase
  cin.getline(stringa, N);

  // contiamo il numero di caratteri
  I = strlen(stringa);
  
  for (i=0; i<I; i++) {
    // escludiamo gli spazi dal conteggio dei caratteri
    if (stringa[i] != ' ') {
      conta=conta+1;
    }
  }
  
  cout<<"I caratteri sono "<<conta<<endl;

	return 0;
}
