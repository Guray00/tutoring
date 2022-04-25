#ifndef BATTERIA_H
#define BATTERIA_H

class Batteria
{

  private: 
    // definizione degli attributi
    int capacita; 
    int livello; 

  public: 
    // costruttore di default
    Batteria();

    // costruttore con parametri
    Batteria(int, int); 
    int getCapacita(); 
    int getLivello(); 
    void carica(int); 
    void consuma(); 
    int setCapacita(int);
    int setLivello(int);
}; // <- !!!!!!



#endif // BATTERIA_H