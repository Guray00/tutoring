
#include<iostream>
#include <iomanip>
using namespace std;

int lunghezzastringa(char v[],int n){
	int k=0;
	for(int i=0;v[i]!='\0';i++){
		k++;
	}
	return k;
}

bool confrontastringhe(char v1[],int n, char v2[], int m){
	if(lunghezzastringa(v1,n)==lunghezzastringa(v2,m))
		return true;
	else
		return false; 
}

int main(){
	int n,m;
	cout<<"inserisci la lunghezza massima del nome\n";
	cin>>n;
	cout<<"inserisci la grandezza massima del cognome\n";
	cin>>m;
	char v1[n],v2[m];
	cout<<"insersci il nome\n";
	cin>>v1;
	cout<<"inserisci il cognome\n";
	cin>>v2;
	int risp,risp2;
	do{
	cout<<setw(25)<<setfill('-')<<"\n"
		<<"|"<<setw(10)<<setfill(' ')<<"1) LUNGHEZZA NOME"<<setw(6)<<setfill(' ')<<"|"<<endl
		<<"|"<<setw(10)<<setfill(' ')<<"2) LUNGHEZZA COGNOME"<<setw(3)<<setfill(' ')<<"|"<<endl
		<<"|"<<setw(10)<<setfill(' ')<<"3) CONFRONTO "<<setw(10)<<setfill(' ')<<"|"<<endl
		<<setw(25)<<setfill('-')<<"\n";
	do{
	cin>>risp;
	if(risp!=1 && risp!=2 && risp!=3 )
		cout<<"errore, rinserisci la tua scelta\n";
	}while(risp!=1 && risp!=2 && risp!=3);
	switch(risp){
		case 1:
			cout<<"la lunghezza del nome e': "<<lunghezzastringa(v1,n)<<endl;
			break;
		case 2:
			cout<<"la lunghezza del cognome e': "<<lunghezzastringa(v2,m)<<endl;
			break;
		case 3:
			if(confrontastringhe(v1,n,v2,m))
				cout<<"le stringhe sono uguali\n";
			else
				cout<<"le stringhe non sono uguali\n";
	}
	cout<<"premi 1) per selezionare un altra opzione, 0) per concludere il programma\n";
	cin>>risp2;
	}while(risp2==1);

	return 0;	
}

