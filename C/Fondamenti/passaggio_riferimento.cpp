#include<iostream>
 
using namespace std;


void cambia_non_funzionante(int variabile){
	variabile = variabile * 2;
}

// la & significa che è per riferimento!
void cambia(int &variabile){
	variabile = variabile * 2;
}


int main(){

	int valore;

	cout<<"Inserisci un valore: ";
	cin>>valore;

	// chiamiamo la funzione che dovrebbe calcolare il doppio
	cambia_non_funzionante(valore);

	cout<<endl<<endl;
	cout<<"Adesso dovremmo stampare a schermo il doppio"<<endl;
	cout<<"del valore inserito, ma non avviene perchè"<<endl;
	cout<<"in realtà non abbiamo fatto un passaggio per"<<endl;
	cout<<"riferimento, ma per valore!"<<endl<<endl;

	cout<<valore<<endl<<endl;

	cout<<"Ora eseguiamo la cambia corretta con la '&': ";
	cambia(valore);
	cout<<endl<<endl<<valore<<endl<<endl;

	return 0;
}