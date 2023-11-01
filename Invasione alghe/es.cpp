#include <iostream>
using namespace std;

int main(){
  int pi, pf, anni=0;
  
  
  // prendiamo in input il valore della popolazione inziale
  // (verifico che sia intero positivo)
  do{
    cout<<"Inserire il valore inziale della popolazione: ";
    cin>>pi;

    // controlo per stampare a schermo l'errore
    if(pi<=0){
      cout<<"Il valore deve essere positivo"<<endl;
    } 
  }while(pi<=0);
  
  // prendiamo in input il valore della popolazione finale
  // (verifico che sia intero positivo)
  do {
    cout << "Inserisci la popolazione finale: ";
    cin >> pf;
    
    if(pf<=0){
      cout<<"Il valore deve essere positivo"<<endl;
    } 

    if(pf < pi){
      cout<<"La popolazione finale deve essere maggiore di quella inziale!"<<endl;
    }
  } while(pf <= 0 || pf < pi);
  

  // finche il valore inziale non raggiunge quello finale
  // dobbiamo continuare a ciclare
  while(pf > pi){

    // caso pari
    if(anni%2==0){
      // raddoppiare 
      pi= 2*pi;
      anni++;
    }

    // caso dispari
    else {
      // aggiorno il valore della popolazione
      pi = pi - pi/3;
      
      // contiamo che un anno è passato
      anni++;     
    }

  }

  // stampare a schermo quanti anni sono passati
  cout<<"Sono passati "<<anni<<" anni"<<endl;

  
	return 0;
}