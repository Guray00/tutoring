// Dichiarare due variabili intere, e due puntatori coerenti. Puntare a tali variabili, quindi verificare che i due indirizzi sono differenti fra loro, mediante un semplice confronto fra i puntatori.

#include <iostream>
using namespace std;



int main(){
	int n1, n2;
  cout<<"inserisci n1:"<<endl;
  cin>>n1;
  cout<<"inserisci n2:"<<endl;
  cin>>n2;
	
  int* p1= &n1;
  int* p2 = &n2;

	cout<<"L'indirizzo di n1: "<<&n1<<endl;
	cout<<"L'indirizzo di p1: "<<&p1<<endl;

	cout<<endl;

	cout<<"L'indirizzo di n2: "<<&n2<<endl;
	cout<<"L'indirizzo di p2: "<<&p2<<endl;

	return 0;
}