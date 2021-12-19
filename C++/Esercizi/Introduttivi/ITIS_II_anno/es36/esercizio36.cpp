
#include <iostream>
#include <iomanip>
using namespace std;

int output(int v[],int n);

int caricamento(int v[],int n);

int max(int v[], int n);

int min(int v[], int n);

int main(){
	int c=0,n,fine=0;
	cout<<"inserire la grandezza del vettore\n";
		cin>>n;
	int v[n];
	do{
		do{
			cout<<setw(40)<<setfill('-')<<"\n"
			<<"|"<<setw(26)<<setfill(' ')<<"1) CARICARE IL VETTORE"<<setw(12)<<setfill(' ')<<"|"<<endl
			<<"|"<<setw(30)<<setfill(' ')<<"2) VISUALIZZARE IL VETTORE"<<setw(8)<<setfill(' ')<<"|"<<endl
			<<"|"<<setw(30)<<setfill(' ')<<"3) VISUALIZZARE IL MASSIMO"<<setw(8)<<setfill(' ')<<"|"<<endl
			<<"|"<<setw(29)<<setfill(' ')<<"4) VISUALIZZARE IL MINIMO"<<setw(9)<<setfill(' ')<<"|"<<endl
			<<setw(40)<<setfill('-')<<"\n";
			int risp;
			do{
			cin>>risp;
			if(risp!=1 && risp!=2 && risp!=3 && risp!=4)
				cout<<"errore, inserisci un valore corretto\n";
			}while(risp!=1 && risp!=2 && risp!=3 && risp!=4);
			switch(risp){
				case 1:
					c++;
					caricamento(v,n);
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
						cout<<" per poter visualizzare il valore maggiore e' necessario caricare il vettore\n";
						break;
					}
					cout<<"il valore massimo del vettore e' "<<max(v,n)<<endl;
				break;
				case 4:
					if(c==0){
						cout<<" per poter visualizzare il valore minore e' necessario caricare il vettore\n";
						break;
					}
					cout<<"il valore minimo del vettore e' "<<min(v,n)<<endl;				
			}
		}while(c==0);
		cout<<"vuoi selezionare un altra opzione?\n"<<"1) SI\n0) NO\n";
		cin>>fine;
	}while(fine==1);
}

int caricamento(int v[],int n){
	for(int i=0;i<n;i++){
		cout<<"inserisci il valore "<<i+1<<" del vettore\n";
		cin>>v[i];
	}
}

int output(int v[],int n){
	for(int i=0;i<n;i++){
		cout<<"valore "<<i+1<<": "<<v[i]<<endl;
	}
}

int max(int v[], int n){
	int massimo=v[0];
	for(int i=1;i<n;i++){
		if(v[i]>massimo)
			massimo=v[i];
	}
	return massimo;
}

int min(int v[], int n){
	int	min=v[0];
	for(int i=1;i<n;i++){
		if(v[i]<min)
			min=v[i];
	}
	return min;
}
