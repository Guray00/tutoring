
#include <iostream>
using namespace std;


int main(){

	// creo un puntatore a intero
	int* a;

	// inizializzo b (intero) a 5
	int b = 5;

	a = &b;

	cout<<"a: "<<*a<<endl;

	cout<<endl<<"Cambio il valore di b"<<endl<<endl;
	b = 7;

	cout<<"Ristampo a: "<< *a<<endl<<endl;
	cout<<"Il valore di a è cambiato perchè"<<endl;
	cout<<"non ha memorizzato un valore, ma"<<endl;
	cout<<"una locazione di memoria, perciò"<<endl;
	cout<<"stampa il contenuto della cella a"<<endl;
	cout<<"a cui punta."<<endl<<endl;
	return 0;
}