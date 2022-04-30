#ifndef PORTAFOGLIO_H
#define PORTAFOGLIO_H

#include "PortaMonete.h"

class PortaFoglio : public PortaMonete
{
  private: 
    int b5euro; 
    int b10euro; 
    int b20euro; 

  public:
    PortaFoglio();
    PortaFoglio(int, int, int, int, int, int);

    void inserisci(float);
    void inserisci(float, int);

    float getDenaro();
    void printDenaroPerTipo();
    float getBanconote();

}; 

#endif // PORTAFOGLIO_H
