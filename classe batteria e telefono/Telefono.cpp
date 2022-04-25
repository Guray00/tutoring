#include "Telefono.h"
#include "Batteria.h"

#include <iostream>
using namespace std;

Telefono::Telefono(int p_capacita, int p_livello)
{
  // impostiamo i valori della batteria
  bat.setCapacita(p_capacita);
  bat.setLivello(p_livello);
  numMsg  = 0;
  numCall = 0;
  minCall = 0;
}

void inviaMsg()
{
  // ogni 10 messaggi si scarica di una tacca il telefono
  // dobbiamo contare un me ssaggio

  numMsg = numMsg + 1;

  if (numMsg == 10){
    // la batteria si deve scaricare
    bat.consuma();

    // dobbiamo dirgli di riniziare a contare
    numMsg = 0;
  }
  
}

void chiamata(int p_minuti){

  // per ogni minuto della chiamata, bisogna scaricare 
  // il telefono di 1
  
  int i; 
  for (i = 0; i < p_minuti; i++){
    // consumiamo per ogni minuto
    bat.consuma();
  }  

  // dobbiamo contare che abbiamo fatto una chiamata
  numCall = numCall + 1;

  // dobbiamo contare i minuti totali fatti in chiamata
  minCall = minCall + p_minuti;
  
}


int getChiamate(){
  return numCall;
}

int getMinuti(){
  return numMin;
}

int getLivelloBatteria(){
  return bat.getLivello();
}

void caricaBatteria(int p_unita){
  bat.carica(p_unita);
}

void PrintStato(){
  cout<<"Informazioni telefono: "<<endl;
  cout<<"- Capacita: " << bat.getCapacita() << endl;
  cout<<"- Livello: "  << bat.getLivello()  << endl;
  cout<<"- Numero messaggi: " << numMsg  << endl;
  cout<<"- Numero chiamate: " << numCall << endl;
  cout<<"- Minuti chiamate: " << minCall << endl;
}