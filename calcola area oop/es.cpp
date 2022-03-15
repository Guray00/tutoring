#include <iostream>
using namespace std;

/*

*/

// creo la classe
class Rettangolo{
  public:
    // elenco gli attributi
    int altezza;
    int larghezza;

    // definisco il costruttore
    Rettangolo(int l, int a){
      altezza = a;
      larghezza = l;
    }

    // funzione che consente di stampare a schermo
    void print(){
      cout<<"L'altezza del rettangolo e' " << altezza << " e la larghezza del rettangolo e' "<<larghezza<<endl;
    }

    // funzione che consente di calcolare l'area
    int calcolaArea(){
      return larghezza*altezza;
    }
    
};


int main(){

	Rettangolo r (5, 4);
  r.print(); // L'altezza del rettango.

  cout << "L'area vale " << r.calcolaArea();
  
	return 0;

}
