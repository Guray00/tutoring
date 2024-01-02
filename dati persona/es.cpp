#include <iostream>
#include <string>
using namespace std;

int main(){
  string nome;
  string cognome;
  int    giorno;
  string mese;
  int    anno;

  cout << "Inserisci il nome: ";
  cin  >> nome;
  
  cout << "Inserisci il cognome: ";
  cin >> cognome;

  do {
    cout << "Inserisci giorno di nascita: ";
    cin >> giorno;
  } while(giorno < 1 || giorno > 31);
 
  cout << "Inserisci mese di nascita: ";
  cin>> mese;

  do {
    cout << "Inserisci anno di nascita: ";
    cin >> anno;
  } while(anno < 0);

  cout << endl;
  cout << "Riepilogo dei tuoi dati"<<endl;
  cout << "Nome: " << nome<<endl;
  cout << "Cognome: "<< cognome<<endl;
  cout << "Data di nascita: "<< giorno << " " << mese << " " << anno<<endl;
  
  return 0;
}