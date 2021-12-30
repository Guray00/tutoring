#include "compito.h"
#include <cstring>


NastroTrasportatore::NastroTrasportatore(){
  p0 = NULL; 
}

void NastroTrasportatore::aggiungi(const char* id){
  
  elem *p = new elem;
  p->id   = new char [strlen(id) + 1];
  strcpy(p->id , id );
  p->controllato = false;
  p->next = p0;
  p0 = p; 
}

NastroTrasportatore::NastroTrasportatore( const NastroTrasportatore& nt){
  p0 = NULL;
  
  elem* precedente;
  for (elem* p = nt.p0; p!=NULL; p = p->next){
    elem *q = new elem;
    q->id = new char [strlen (p->id)+1];
    strcpy(q->id,p->id);
    q->controllato = p->controllato;

    q->next = NULL;

    // se è il primo elemento che aggiungo
    if(p0 == NULL){
       p0 = q;
    }

    // prendo il precedente e lo lego a me (q)
    else {
      precedente->next = q;
    }

    // ultimo passaggio che serve ad aggiornare il valore del precedente
    precedente = q;
  }
}

// rimuovi copiata
void NastroTrasportatore::rimuovi() {
  if (_testa == NULL)
    return;

  pezzo *p, *q;
  for (p = _testa; p->pun != NULL; p = p->pun)
    q = p;

  // controllo se la lista contiene un solo elemento
  if (p == _testa)
    _testa = NULL;
  else
    q->pun = NULL;

  delete[] p->id;
  delete p;
}


ostream& operator<< (ostream& os, const NastroTrasportatore& nt){
  if(nt.p0 == NULL){
    os  << "<vuoto>";
  }
  // altrimenti procedo
  else {
    for (elem *p = nt.p0; p!= NULL; p = p->next){
      //(...)=(...)=(...)
      os <<"("<<p->id<<")";

      // se quello che viene dopo non è null non siamo all'ultima casella
      if (p->next != NULL) os<<"=";
    }
  }
  return os;
}



// --- SECONDA PARTE ---

void NastroTrasportatore::controlla(unsigned int i) {
  // controllo validita' indice e caso lista vuota
  if (i < 1 || _testa == NULL)
    return;

  // caso particolare: controllo del primo elemento
  if (i == 1) {
    _testa->controllato = true;
    return;
  }

  unsigned int c = 1;
  pezzo *p = _testa;
  pezzo *q = p;
  pezzo *r;
  while (p != NULL && c < i) {
    r = q; // r rimane due passi indietro a p
    q = p; // q rimane un passo indietro a p
    p = p->pun;
    c++;
  }

  // ho raggiunto la fine della lista
  // (non esiste l'i-esimo pezzo)
  if (p == NULL)
    return;

  // controlla se pezzo gia' controllato
  if (p->controllato)
    return;

  p->controllato = true;

  // caso particolare: sono sul secondo elemento e lo
  // devo spostare in testa
  if (r == q) {
    _testa->pun = p->pun;
    p->pun = _testa;
    _testa = p;
  } 

  //           
  // r -> p -> q -> x
  
  else {
    q->pun = p->pun;
    r->pun = p;
    p->pun = q;
  }
}
