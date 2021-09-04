
#include<iostream>
using namespace std;

struct gara{
	string nominativo;
	string numero;
	char sesso='F';
	int nascista;
	float tempo;
};

int main(){
	int n;
	cout<<"inserisci il numero di atleti partecipanti (max. 100)\n";
	do{
		if(n>100)
			cout<<"errore, i partecipanti devono essere minore di 100\n";
		cin>>n;
	}while(n>100);
	
	gara partecipante[n];
	
	for(int i=0;i<n;i++){
		cout<<"inserisci i dati dell'atleta "<<i+1<<endl;
		cout<<"inserisci il numero dell'atleta\n";
		cin>>partecipante[i].numero;
		cout<<"inserisci il nominativo dell'atleta\n";
		cin>>partecipante[i].nominativo;
		cout<<"insersci il sesso dell'alteta (M/F)\n";
		do{
			if(partecipante[i].sesso!='F' && partecipante[i].sesso!='M')
				cout<<"errore, puoi inserire (M) oppure (F)\n";
			cin>>partecipante[i].sesso;	
		}while(partecipante[i].sesso!='M' && partecipante[i].sesso!='F');
		cout<<"inserici l'anno di nascita dell'atleta\n";
		cin>>partecipante[i].nascista;
		cout<<"inserisci il tempo impiegato dall'atleta per completare la gara (in secondi)\n";
		cin>>partecipante[i].tempo;
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(partecipante[i].tempo>partecipante[j].tempo)
				swap(partecipante[i],partecipante[j]);
		}
	}
	
	cout<<"---------CLASSIFICA----------\n";
	for(int i=0;i<n;i++){
		cout<<"POSIZIONE "<<i+1<<endl;
		cout<<"NUMERO ATLETA: "<<partecipante[i].numero<<endl;
		cout<<"NOME ATLETA: "<<partecipante[i].nominativo<<endl;
		cout<<"SESSO ATLETA: "<<partecipante[i].sesso<<endl;
		cout<<"DATA NASCITA ATLETA: "<<partecipante[i].nascista<<endl;
		cout<<"TEMPO DELL'ATLETA: "partecipante[i].tempo<<endl;	
	}
}

