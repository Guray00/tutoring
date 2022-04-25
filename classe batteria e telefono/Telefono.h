#ifndef TELEFONO_H
#define TELEFONO_H

#include "Batteria.h"

class Telefono
{
  private: 
    int numCall; 
    int numMsg; 
    int minCall; 
    Batteria bat;

  public: 
    Telefono(int, int); 
    void inviaMsg(); 
    void chiamata(int); 
    int getChiamate(); 
    int getMsg();
    int getMinuti();
    int getLivelloBatteria(); 
    void caricaBatteria(int); 
    void PrintStato(); 
}; //<- !!!!



#endif // TELEFONO_H