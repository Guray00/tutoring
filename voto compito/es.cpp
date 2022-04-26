#include <iostream>
using namespace std;

int main(){
  int voto;
  
  // chiedo all'utente di inserire il voto  
  cout<<"Inserisci il voto: ";
  cin>>voto;

  switch(voto){

    case 10: 
      cout<<"Ottimo";
      break;

    case 9: 
      cout<<"Ottimo";
      break;

    case 8: 
      cout<<"Distinto";
      break;

    case 7:
      cout<<"Buono";
      break;

    case 6: 
      cout<<"Sufficiente";
      break;

    case 5: 
      cout<<"Insufficiente";
      break;

    case 4:
      cout<<"Gravemente insufficiente";
      break;

    default:
      cout<<"Hai inserito un numero non valido!";
      break;
  }
  
	return 0;

}