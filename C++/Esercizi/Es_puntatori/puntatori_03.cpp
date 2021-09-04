
/*
Argomento: Aritmetica dei puntatori

Scrivere un programma che chieda in input N numeri interi e li memorizzi in un vettore. Calcolare la somma dei numeri interi inseriti usando unicamente l'aritmetica dei puntatori (non tramite v[i]). Stampare in output il valore della somma degli elementi.

*/
#include<string>
#include <iostream>
using namespace std;


int main(){

	int N;
	cout<<"Inserisci il numero di elementi: ";
	cin >> N;

	int v[N];

	for (int i=0; i < N; i++){
		int tmp;
		cout<<endl<<"Inserisci il valore: ";
		cin>>tmp;
		v[i] = tmp;
	}

	// il puntatore non punta a niente
	//int* p = NULL;

	// per farlo puntare alla prima cella di v
	
	/*p = &v[0];

	cout<<*p<<endl;

	p = p+1;
		cout<<*p<<endl;

	*/

	int somma = 0;
	for (int* p = &v[0]; p != &v[N]; p++){
		//cout<<*p<<endl;
		somma = somma + *p;
	}

	cout<<"La somma totale vale: "<<somma<<endl;

	return 0;
}