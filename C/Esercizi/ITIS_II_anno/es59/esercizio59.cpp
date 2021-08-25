
#include <iostream>
#include "lib_GiuseppeDP.h"
using namespace std;

int main(){
	cout<<"inserisci il numero di partecipanti al concorso\n";
	int n;
	cin>>n;
	concorso partecipante[n];
	for(int i=0;i<n;i++){
		cout<<"inserisci il nome del partecipante "<<i+1<<endl;
		cin>>partecipante[i].nome;
		cout<<"inserisci il punteggio della prima prova del partecipante "<<i+1<<endl;
		cin>>partecipante[i].p1;
		cout<<"inserisci il punteggio della seconda prova del partecipante "<<i+1<<endl;
		cin>>partecipante[i].p2;
	}
	for(int i=0;i<n;i++){
		partecipante[i].tot=partecipante[i].p1+partecipante[i].p2;
	}
	ordinamento(partecipante,n);
	for(int i=0;i<n;i++){
		cout<<"-----------------\n";
		cout<<"posizione"<<i+1<<endl;
		cout<<"nome\n";
		cout<<partecipante[i].nome<<endl;
		cout<<"punteggio\n";
		cout<<partecipante[i].tot<<endl<<endl;
	}
}


