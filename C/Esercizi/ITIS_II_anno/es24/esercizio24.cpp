
#include <iostream>
using namespace std;
int main (){
	int n;
	cout<<"inserisci la grandezza del vettore\n";
	cin>>n;
	float v1[n], v2[n],a,b,temp;
	for(int i=0;i<n;i++)
		v2[i]=0;
	cout<<"inserisci i valori dell'intervallo\n";
	cin>>a;
	cin>>b;
	if(a==b){
		while(a==b){
		cout<<"ERRORE, reinserisci l'intervallo\n";
		cin>>a;
		cin>>b;
		}
	}
	if(a>b){
			temp=a;
			a=b;
			b=temp;
	}
	cout<<"inserisci i valori del vettore\n";
		for(int i=0;i<n;i++){
			cin>>v1[i];
			if(v1[i]>=a && v1[i]<=b){
				v2[i]=v1[i];
			}
		}
	for(int i=0;i<n;i++)
		cout<<"cella "<<i+1<<", numero "<<v2[i]<<"\n";	
	return 0;
}

