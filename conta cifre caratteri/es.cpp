#include <iostream>
using namespace std;

int main(){
  int contacifre=0;
  int contacons=0;
  int contavoc=0;
  char c;
  
  cout << "Inserisci una serie di caratteri: "; 
  
  do{
    cin>>c;

    // se il carattere è maiuscolo
    if(c>='A' && c <= 'Z'){
      // lo trasformo in minuscolo
      c=c+32;
    }

    // controllo se è una cifra tra 0 e 9
    if(c>='0' && c<='9'){
      contacifre++;
    }

    // contiamo il numero di vocali
    else if(c=='a' || c=='e' || c == 'i' || c == 'o' || c == 'u'){
      contavoc++;
    }
    
    // contare quante volte è presente una consonante maiuscola o minuscola
    // ignorando gli spazi
    else if (c != ' '){
      contacons++;
    }
    
  } while(c != '-');


  cout << "Hai inserito "<< contacifre << " cifre"<<endl;
  cout << "Hai inserito "<< contavoc << " vocali"<<endl;
  cout << "Hai inserito "<< contacons << " consonanti"<<endl;

	return 0;
}