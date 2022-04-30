#ifndef PORTAMONETE_H
#define PORTAMONETE_H

class PortaMonete
{
protected:   
  int m50cent; 
  int m1euro;  
  int m2euro; 

public: 
  // costruttori
  PortaMonete(); 
  PortaMonete(int, int, int); 

  // funzioni
  void inserisci(float); 
  void inserisci(float, int); 
  float getDenaro(); 
  void PrintDenaroPerTipo(); 

}; // <- ATTENZIONE!!!!



#endif // PORTAMONETE_H
