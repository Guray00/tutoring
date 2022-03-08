#include <iostream>
#include <cstring>
#include "compito.h"

using namespace std;

// implementiamo il costruttore
ToDoList::ToDoList(){
  p0 = NULL;
}

//void aggiungi(const char*, int);
void ToDoList::aggiungi(const char *descr, int prio){

  // per prima cosa controlliamo che l'input sia valido
  if (strlen(descr)>40 || prio < 1 || descr == NULL)
    return;

  // input corretto
  elem *p, *q;

  //               q     p
  // 2 -> 1, 2, 2, 2, -, 3, 4, 5
  for (p = p0; p != NULL && p->prio <= prio; p = p->next) {
      q = p; // ci ricorderà l'ultimo p che andava bene 
  }

  elem* nuovo = new elem;
  strcpy(nuovo->descrizione, descr);

  nuovo->next = p;
  nuovo->prio = prio;
  nuovo->fatto = false;

  if (p==p0){
    p0 = nuovo;
  }

  else{
    q->next = nuovo;
  }  
}

ostream& operator<< (ostream& os , const ToDoList& tdl){
  elem *p;
  for (p = tdl.p0;p != NULL; p = p->next){

    if (p->fatto){
      os <<"V ";
    }
    else {
      os <<"  ";
    }

    os << p->prio <<" - "<< p->descrizione<<endl;
  }
  
  return os;
}

ToDoList::~ToDoList(){
  elem *p = p0, *q;
  while (p != NULL){
    q = p->next;
    delete p;
    p = q;
  }
}

// SECONDA PARTE

ToDoList& ToDoList::operator+=(const ToDoList& tdl){

  if(&tdl != this){
    return *this;
  }
  
  elem *p;
  for (p = tdl.p0; p != NULL; p = p->next){
    aggiungi (p->descrizione, p->prio);
  }
  
  return *this;
}