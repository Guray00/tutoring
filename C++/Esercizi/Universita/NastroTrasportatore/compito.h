#include <iostream>
using namespace std;

struct elem{
  char* id;
  elem* next;
  bool controllato;
};
 
class NastroTrasportatore{
  elem* p0; // testa
  public:
  NastroTrasportatore ();
  void aggiungi (const char *);
  void rimuovi();
  friend ostream& operator <<(ostream&, const NastroTrasportatore&);
  NastroTrasportatore( const NastroTrasportatore&);
};

