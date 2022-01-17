#include <iostream>
using namespace std;


/*
L'utente inserisce un numero fino a quando non viene inserito 0. 
Contare e sommare quelli compresi tra 20 e 80 (estremi esclusi).
*/


int main(){
  int n;
  int somma = 0;
  int cont  = 0;

  do {
    cout << "inserisci un numero\n";
    cin >> n;
    
    // 20 < n < 80   
    // se n > 20 && n < 80 ....
    if(n > 20 && n < 80){
      cont++;
      somma = somma + n;
    }
   
  } while (n!=0);

  cout<<somma<<endl;

	return 0;

}


 /*
    Tabella di verità dell'AND
    CONDIZIONE 1     CONDIZIONE 2        RISULTATO
      falso            falso                falso
      vero             falso                falso
      falso            vero                 falso
      vero             vero                  vero

    Tabella di verità dell'OR
    CONDIZIONE 1     CONDIZIONE 2        RISULTATO
      vero             falso              vero
      falso            vero               vero
      falso            falso              falso
      vero             vero               vero
    */
    