// variante con funzioni ed extra

#include <iostream>
using namespace std;

/*
Creare un algoritmo che riceva una quantità di tempo in formato ore, minuti e secondi e la restituisca espressa solamente in secondi.

Extra1:
Creare poi una seconda funzione che riceva in ingresso due parametri di tempo in secondi e indichi qual è il maggiore tra i due.

Extra2:
Creare poi il main associato che si occupi di passare i valori temporali alla seconda funzione e stampi il risultato di entrambe le funzioni nel main.
*/

int seconditotali(int a, int b, int c){
  a = a*3600;
  b = b*60;
  c = c+a+b;
  return c;
}

// funzione che prende dal main i due valori di 
// secondi e fa il confronto => restituisce il maggiore (int)
int maggiore(int x, int y){
  if(x>y){
    return x;
  }
  else{
    return y;
  }
}

int main(){

  // inizializzo ore,minuti,secondi,risultato
  int ore, minuti, secondi, risultato;
  int ore2, minuti2, secondi2, risultato2;
  
  cout<<"Inserisci ore: ";
  cin>>ore;
  cout<<"Inserisci minuti: ";
  cin>>minuti;
  cout<<"Inserisci secondi: ";
  cin>>secondi;

  cout<<endl<<endl;
  cout<<"Inserisci ore: ";
  cin>>ore2;
  cout<<"Inserisci minuti: ";
  cin>>minuti2;
  cout<<"Inserisci secondi: ";
  cin>>secondi2;

  
  // chiamo la funzione, e salvo il risultato
  risultato  = seconditotali(ore, minuti, secondi);
  risultato2 = seconditotali(ore2, minuti2, secondi2);

  int m = maggiore(risultato, risultato2);

  cout<<endl<<"Il primo numero in secondi viene: "<<risultato<<endl;
  cout<<"Il secondo numero in secondi viene: "<<risultato2<<endl;
  cout<<"Il maggiore e': "<<m<<endl;
  
  
	return 0;

}