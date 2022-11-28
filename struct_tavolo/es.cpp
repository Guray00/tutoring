#include <iostream>
using namespace std;


// un metodo alternativo era aggiungere 
// un ulteriore struttura per memorizzare
// le dimensioni
/*
struct dimensione {
  int lunghezza;
  int larghezza;
  int altezza;
}
*/

// creazione della struttura tavolo
struct tavolo{
  int n_persone;
  int altezza;
  int lunghezza;
  int larghezza;

  // dimensione dim;
};

int main(){

  // informazioni del primo tavolo
  tavolo tavolo1;
  tavolo1.n_persone=4;
  tavolo1.altezza=6;
  tavolo1.lunghezza=2;
  tavolo1.larghezza=4;

  // informazioni del secondo tavolo
  tavolo tavolo2;
  tavolo2.n_persone=7;
  tavolo2.altezza=2;
  tavolo2.lunghezza=3;
  tavolo2.larghezza=5;

  // numero totali di posti tra tutti i tavoli
  int tot;
  tot=tavolo1.n_persone+tavolo2.n_persone;
  
  cout<<"posti totali: "<< tot << endl;

  // stampo le info del primo tavolo
  int area=tavolo1.lunghezza*tavolo1.larghezza;
  float area_persona= (float) area/tavolo1.n_persone;
  cout<<"superficie del primo tavolo: "<< area << endl;
  cout<<"superficie a persona del primo tavolo: "<<  area_persona << endl;
  
  area=tavolo2.lunghezza*tavolo2.larghezza;
  area_persona= (float) area/tavolo2.n_persone;
  cout<<"superficie del secondo tavolo: "<< area << endl;
  cout<<"superficie a persona del secondo tavolo: "<<    area_persona << endl;
  
	return 0;

}