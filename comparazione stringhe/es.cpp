#include <iostream>
#include <cstring>
using namespace std;
#define N 100

int main(){

  int l, m, i;
  
  char stringa[N];
  char stringa2[N];

  // chiedo la prima stringa
  cout<<"Inserire una stringa: ";
  cin.getline (stringa, N);

  // chiedo la seconda stringa
  cout<<"Inserire una stringa: ";
  cin.getline (stringa2, N);

  // calcolo la lunghezza delle stringhe
  l=strlen (stringa);
  m=strlen (stringa2);

  // se le stringhe hanno una lunghezza diversa, sicuramente saranno diverse
  if (l!=m) {
    cout<<"Le stringhe sono diverse";
  } 

  // se non sono diverse, ne segue che sono uguali
  else {
    for (i=0; i<l; i++) {
      if (stringa[i]!=stringa2[i]) {
        cout<<"Le stringhe sono diverse";
        return 0;
      }
    }
    // se arrivo qua, non sono mai uscito
    cout<<"Le stringhe sono uguali";
  }
  
	return 0;
}