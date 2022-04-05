#include <iostream>
#include "Point.h"

using namespace std;


// main di prova senza senso
int main(){

  int x, y;
  int risposta;

  // creo un punto esterno
  Point punto(5, 5);

  cout<<"Seleziona cosa vuoi fare: "<<endl;
  cout<<"0: crea un punto"<<endl;
  cout<<"1: getX() "<<endl;
  cout<<"2: setX() "<<endl;

  cin>>risposta;

  switch(risposta){

    case 0:
      // creo le variabili per salvermi
      // temporaneamente i valori di x e y
      
      cout<<"Inserisci la x: ";
      cin >> x;
      cout<<"Inserisci la y: ";
      cin >> y;

      punto.setX(x);
      punto.setY(y);
      break;

   case 1:
      cout<<"La x vale: "<<punto.getX()<<endl;
      break;

    case 2:
      int x;
      cout<<"Inserisci il nuovo valore della x: ";
      cin>> x;
      punto.setX(x);
      break;
  }
  
  
  /*
  Point A(5, 5);
  Point B(6, 6);

  // test dei get
  cout<<A.getX()<<endl;
  cout<<A.getY()<<endl;
  
  
  // test dei set
  A.setX(6);
  A.setY(6);
  
  float distanza = B.distanza(A);
  cout<<distanza<<endl;*/
  
	return 0;

}