#include <iostream>
using namespace std;

// creazione della struttura
struct libro{
  int codice;  // codice del libro
  int pagine;  // pagine del libro
  float costo; // costo totale
};

int main(){

  // creiamo il primo libro
  libro libro1;
  libro1.codice=345;
  libro1.pagine=156;
  libro1.costo=3.90;

  libro libro2;
  libro2.codice=100;
  libro2.pagine=654;
  libro2.costo=9.30;
  
  libro libro3;
  libro3.codice=120;
  libro3.pagine=153;
  libro3.costo=5.20;

  cout<<"Libro1"<<endl;
  cout<<"- "<<libro1.codice<<endl;
  cout<<"- "<<libro1.pagine<<endl;
  cout<<"- "<<libro1.costo<<endl;
  
  return 0;

}