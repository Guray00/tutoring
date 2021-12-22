#include<iostream>
using namespace std;

struct elem {
  char descrizione[40+1];

  bool fatto;
  int prio;

  elem *next;
};

class ToDoList {
    elem * p0;

    public:
      ToDoList();
      void aggiungi(const char *, int);
  
      friend ostream& operator<<(ostream&, const ToDoList&);
      ~ToDoList();

      ToDoList& operator+=(const ToDoList&);

};
