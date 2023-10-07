#include <cstring>
#include <iostream>
using namespace std;

#define N 100

int main(){
  int l=0, i, conta=0;
  char stringa[N];

  // chiedo di inserire una frase in input
  cout<<"Inserire una frase: ";
  cin.getline(stringa, N);
  
  // parte da 1 se non c'è uno spazio come primo carattere
  if (stringa[0] != ' ') {
    conta=1;
  }
  
  // calcolo la lunghezza della stringa
  l=strlen(stringa);


  for (i=0; i<l-1; i++) {
    // la && serve per controllare che effettivamente la parola cominci
    // e risolve il problema dei molteplici spazi
    if (stringa[i]==' ' && && stringa[i+1] != ' ' && stringa[i+1] != '\0' && stringa[i+1] != '\n') {
      conta=conta+1;
    }
  }
  
  cout<<"Le parole sono "<<conta<<endl;
	return 0;
}