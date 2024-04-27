#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

  // inizializzare per i numeri casuali
  srand(time(NULL));
  
  // creo una scatola contatore
  int cont=0;
  
  // creo una scatola somma
  int s=0,n,media;
  
  do {
    // genero un numero 
    n = rand()% (41) + (-20);
    
    // stampo il numero
    cout << n << endl;
    
    // calcolo la somma dei numeri
    s=s+n;
    
    // conto i numeri
    cont=cont+1;
    
  }while (n!=0);// fino a quando non genero lo zero

  // calcolo la media (casting)
  media=(float)(s/cont);

  // stampo a schermo la media
  cout << "la media dei numeri generati e' " << media << endl;

	return 0;
}