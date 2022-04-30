#include "PortaMonete.h"
#include <iostream>

using namespace std;

PortaMonete::PortaMonete()
{
  m50cent=0; 
  m1euro=0; 
  m2euro=0; 
}
PortaMonete::PortaMonete(int p_m50cent, int p_m1euro, int p_m2euro)
{
  m50cent=p_m50cent; 
  m1euro=p_m1euro; 
  m2euro=p_m2euro; 
}

void PortaMonete::inserisci(float val)
{
  // non sappiamo come gestire le monete da 0.05, 0.1 e 0.2 non avendo
  // a disposizione 
    
  if(val==0.50)
  {
    m50cent=1+m50cent; 
  }
    
  else if(val==1)
  {
    m1euro=m1euro+1; 
  }
    
  else if(val==2)
  {
    m2euro=m2euro+1;
  }
}

// Metodo che riceve il valore di una moneta (0,05 – 0,1 – 0,2 – 0,5 – 1 – 2) 
// e se è un valore ammissibile aumenta il numero di monete 
// di quel tipo di una unità
void PortaMonete::inserisci(float val, int num)
{
   if(val==0.50)
  {
    m50cent=num+m50cent; 
  }
    
  else if(val==1)
  {
    m1euro=m1euro+num; 
  }
    
  else if(val==2)
  {
    m2euro=m2euro+num;
  }
}

// Metodo che restituisce la quantità totale di denaro accumulata
float PortaMonete::getDenaro()
{
  float tot=0; 
  tot = m50cent*0.50 +m1euro*1+m2euro*2;
  
  return tot;  
} 

// Metodo per visualizzare a video quante monete di ogni taglio sono presenti
void PortaMonete::PrintDenaroPerTipo()
{
  cout<<"monete da 50 cent:\t"<<m50cent<<endl; 
  cout<<"monete da 1 euro:\t"<<m1euro<<endl; 
  cout<<"monete da 2 euro:\t"<<m2euro<<endl; 
}   