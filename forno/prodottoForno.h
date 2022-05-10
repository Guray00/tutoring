#ifndef PRODOTTOFORNO_H
#define PRODOTTOFORNO_H

#include <string>

// serve per utilizzare string
// senza dover scrivere std::string
using namespace std;

/*
Dati: 
- Codice (string)
- Nome (stringa)
- Scandenza (int) 

ed i metodi:
- Costruttore di default: ProdottoForno()
- Costruttore con parametri: ProdottoForno(codice, nome, scandenza)
- Get e Set
- PrezzoFinale
*/

class ProdottoForno
{
  //attrinuti: 
    private: 
      int scadenza; 
      string codice; 
      string nome; 

  public: 
    // costruttore di default
    ProdottoForno(); 

    // costruttore con parametri
    ProdottoForno(string, string, int); 

    // get
    int getScadenza();
    string getNome(); 
    string getCodice(); 

    // set
    void setScadenza(int);
    void setNome(string); 
    void setCodice(string);

    // PrezzoFinale(); 
    
}; //!!!


#endif // PRODOTTOFORNO_H
