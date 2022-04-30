#include "PortaMonete.h"
#include "PortaFoglio.h"
#include <iostream>

using namespace std;

// Costruttore di default: azzera il numero di tutte le monete e banconote
PortaFoglio::PortaFoglio()
{
  // gestione delle monete
  m50cent=0; 
  m1euro=0; 
  m2euro=0; 

  // gestione delle banconote
  b5euro=0; 
  b10euro=0; 
  b20euro=0; 
}

// Costruttore con parametro: inizializza la quantità di monete 
// e banconote nei vari tagli a valori passati tramite parametri
PortaFoglio::PortaFoglio( int p_m50cent, int p_m1euro, 
                          int p_m2euro, int p_b5euro, int p_b10euro, int p_b20euro)
{
  
  // gestione delle monete
  m50cent = p_m50cent; 
  m1euro  = p_m1euro; 
  m2euro  = p_m2euro; 

  // gestione delle banconote
  b5euro  = p_b5euro; 
  b10euro = p_b10euro; 
  b20euro = p_b20euro; 
  
}

// Metodo che riceve il valore di una moneta o banconota e se è un valore 
// ammissibile aumenta il numero di monete o banconote di quel tipo di una unità
void PortaFoglio::inserisci(float val)
{
  if(val==0.50)
  {
    m50cent=m50cent+1; 
  }
  
  else if(val==1)
  {
    m1euro=m1euro+1; 
  }
  
  else if(val==2)
  {
    m2euro=m2euro+1;
  }
  
  else if(val==5)
  {
    b5euro=b5euro+1;
  }
  
  else if(val==10)
  {
    b10euro=b10euro+1;
  }
    
  else if(val==20)
  {
    b20euro=b20euro+1; 
  }
}

// Metodo che permette di inserire n monete o banconote dello stesso 
// valore in una volta sola
void PortaFoglio::inserisci(float val, int num)
{
  
}

// Metodo che restituisce la quantità totale di denaro accumulata
float PortaFoglio::getDenaro()
{
  
}

// Metodo per visualizzare a video quante monete e 
// banconote di ogni taglio sono presenti
void PortaFoglio::printDenaroPerTipo()
{
  
}

// Metodo che restituisce la quantità totale di denaro accumulata 
// in formato di banconote
float PortaFoglio::getBanconote()
{
  
}