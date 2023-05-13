#include <iostream>
#include <cstring>
using namespace std;
#define N 100


int main(){

  int i, l;

  char stringa[N];
  cout<<"Inserisci una stringa: ";
  cin.getline(stringa,N);

  // misuro la lunghezza della stringa
  l = strlen(stringa);
  
  for (i=l; i>=0; i--) {
    cout<<stringa[i];
  }

	return 0;
}