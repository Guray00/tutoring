#include <iostream>
using namespace std;




int main(){

  // creiamo la variabile per salvare la tabellina
  int numero;
  
  cout<<"Quale tabellina vorrestri mostrare? ";

  // facciamo inserire all'utente il numero
  cin>>numero;

  // vogliamo fare una azione ripetuta
  // partena -> 1
  // arrivo  -> 10 (incluso)
  for(int cont=1; cont <= 10; cont = cont+1){

    // stiamo mostrando qualcosa a schermo:
    // numero " * " cont " = " prodotto
    int prodotto= numero*cont;
    
    // 5 * 1   =  5
    cout<<numero<<" * "<<cont<< " = "<<prodotto<<endl;
  }


	return 0;
}