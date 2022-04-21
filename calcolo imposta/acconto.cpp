#include <iostream>
using namespace std;

/*
noi abbiamo il saldo d'imposta
 -> se il saldo è negativo, non si paga => acconto = 0
 -> se il saldo è positivo
      -> saldo >= 50: acconto = 98% dell'importo
      -> saldo <  50: non paghiamo nulla => acconto = 0
*/

int main(){

  int saldo;
  int importo;
  
  // giocando con le percentuali potrebbe uscire 
  // fuori un numero con la virgola
  float acconto;

  cout<<"Inserire il saldo: ";
  cin>>saldo;

  cout<<"Inserire l'importo: ";
  cin>>importo;

  // se il saldo è negativo, non si paga nulla
  if (saldo < 0){
   acconto = 0; 
  }

  // se il saldo non è negativo...
  else {
    if (saldo >= 50){
      // dobbiamo pagare il 98%
      acconto = importo * 98 / 100.0;
    }

    // se è minore di 50
    else {
      acconto = 0;
    }
  }


  // dobbiamo dire i risultati => Il tuo acconto e' di ....
  cout<<"L'acconto totale e' di: "<<acconto<<endl;
	return 0;

}