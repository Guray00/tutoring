#include <iostream>
using namespace std;

int main(){
  int N = 100, i=0;
  char stringa[N], s, d;

  // inserisco una stringa contenente gli spazi
  cout<<"Inserisci una stringa: ";
  cin.getline(stringa,N);

  // carattere da sostituire
  cout<<"Inserisci il carattere da sostituire: ";
  cin >> s;

  // carattere sostituivo
  cout<<"Inserisci il carattere con cui vuoi sostituire: ";
  cin >> d;
  
  // scorriamo tutta la stringa un carattere alla volta
  while (stringa[i] != '\0'){

    // se trovo il carattere s nella stringa
    if(stringa[i] == s) {
      // lo sostituisco con il carattere in d
      stringa[i]=d;
    }
    i++;
  }
  
  cout<<stringa<<endl;

	return 0;
}