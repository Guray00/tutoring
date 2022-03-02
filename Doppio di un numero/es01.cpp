#include <iostream>
using namespace std;


// 1. Scrivere un algoritmo che calcoli il doppio di un numero fornito in input.

int main(){

    // mostrare a schermo "inserisci un numero: "
    cout<<"inserisci un numero"<<endl;
    int numero;
    
    // prendiamo in input quello che ha inserito l'utente
    cin>>numero;

    // mostriamo a schermo il doppio del valore
    numero = numero*2;
	cout<<"il doppio del numero e' "<<numero;

	return 0;
}