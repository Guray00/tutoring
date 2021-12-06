#include <iostream>
using namespace std;

// 5. Scrivere un algoritmo che calcoli l'area di un trapezio, note le misure delle basi e dell'altezza.


int main(){
    // FORMULA: (b + B)*h / 2

    // dichiaro le variabili
    float base_min;               // base minore
    float base_magg;              // base maggiore
    float altezza;                
    float area;

    // chiedo all'utente di inserire la base minore
    cout<<"inserisci base_min"<<endl;
    cin>>base_min;

    // chiedo all'utente di inserire la base maggiore
    cout<<"inserisci base_magg"<<endl;
    cin>>base_magg;
    
    // chiedo all'utente di inserire l'altezza
    cout<<"inserisci altezza"<<endl;
    cin>>altezza;

    area = (base_magg + base_min) * altezza / 2;
    cout<<"il risultato e' "<<area;
	
	return 0;

}