
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

int output(int v[],int n);

int caricamento(int v[],int n, int v_max);

int max(int v[], int n, int k);

int min(int v[], int n, int k);

int main (){
	srand(time(0));
	int n,v_max=0,k=0,c=0,fine=0;
	cout<<"inserisci la grandezza del vettore\n";
	cin>>n;
	int v[n];
	cout<<"inserisci il valore massimo assegnabile alle celle del vettore\n";
	cin>>v_max;
	k=rand()%v_max+1;
do{
	do{
	cout<<setw(45)<<setfill('-')<<"\n"
			<<"|"<<setw(25)<<setfill(' ')<<"1) CARICARE IL VETTORE"<<setw(18)<<setfill(' ')<<"|"<<endl
			<<"|"<<setw(29)<<setfill(' ')<<"2) VISUALIZZARE IL VETTORE"<<setw(14)<<setfill(' ')<<"|"<<endl
			<<"|"<<setw(38)<<setfill(' ')<<"3) VISUALIZZARE I NUM MAGGIORI DI K"<<setw(5)<<setfill(' ')<<"|"<<endl
			<<"|"<<setw(36)<<setfill(' ')<<"4) VISUALIZZARE I NUM MINORI DI K"<<setw(7)<<setfill(' ')<<"|"<<endl
			<<"|"<<setw(20)<<setfill(' ')<<"5) VISUALIZZARE k"<<setw(23)<<setfill(' ')<<"|"<<endl
			<<setw(45)<<setfill('-')<<"\n";
	int risp;
			do{
			cin>>risp;
			if(risp!=1 && risp!=2 && risp!=3 && risp!=4 && risp!=5)
				cout<<"errore, inserisci un valore corretto\n";
			}while(risp!=1 && risp!=2 && risp!=3 && risp!=4 && risp!=5);
			switch(risp){
				case 1:
					c++;
					caricamento(v,n,v_max);
				break;
				case 2:
					if(c==0){
						cout<<"per poter visualizzare il vettore e' necessario caricarlo\n";
						break;
					}
					output(v,n);
				break;
				case 3:
					if(c==0){
						cout<<" per poter visualizzare i valori maggiori di k e' necessario caricare il vettore\n";
						break;
					}
					cout<<"il numero di elementi maggiori di k e' "<<max(v,n,k)<<endl;
				break;
				case 4:
					if(c==0){
						cout<<" per poter visualizzare i valori minori di k e' necessario caricare il vettore\n";
						break;
					}
					cout<<"il numero di elementi minori di k e' "<<min(v,n,k)<<endl;
					break;
				case 5:
					cout<<"il valore di k e' "<<k<<endl;				
			}
		}while(c==0);
		cout<<"vuoi selezionare un altra opzione?\n"<<"1) SI\n0) NO\n";
		cin>>fine;
	}while(fine==1);
}

int caricamento(int v[],int n, int v_max){
	for(int i=0;i<n;i++){
		v[i]=rand()%v_max+1;
	}
	cout<<"il vettore e' stato caricato con numeri casuali\n";
}

int output(int v[],int n){
	for(int i=0;i<n;i++){
		cout<<"valore "<<i+1<<": "<<v[i]<<endl;
	}
}

int max(int v[], int n, int k){
	int c_max=0;
	for(int i=0;i<n;i++){
		if(v[i]>k)
			c_max++;
	}
	return c_max;
}

int min(int v[], int n, int k){
	int c_min=0;
	for(int i=0;i<n;i++){
		if(v[i]<k)
			c_min++;
	}
	return c_min;
}
