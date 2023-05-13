#include <iostream>
#include <cstring>
using namespace std;

#define N 100


int main(){

  int l=0, i, start=0, end=0;
  char stringa [N];

  cout<<"Inserisci una stringa: ";
  
  cin.getline (stringa, N);

  // conto il numero di caratteri compresi nella stringa
  l = strlen(stringa);

  // ciao a           mondo bellissimo
  for (i=0; i<l; i++){

    // ottimo modo per trovare lo start
    if (stringa[i]==' ' && stringa[i+1]!=' ') {
      start = i + 1;
    }

    // trovo la fine di una parola
    if (stringa[i]!= ' ' && (stringa[i+1] == ' ' || stringa[i+1] == '\0')){
      end=i;
      cout<< (end - start + 1)<<" ";
    }

  }
    
  return 0;
}