

#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"inserisci la grandezza del vettore\n";
	cin>>n;
	float vet[n], s_positivi=0, s_negativi=0;
	for(int i=0;i<n;i++){
		cin>>vet[i];
		if(vet[i]>0)
			s_positivi+=vet[i];
		else
			s_negativi+=vet[i];
	}
	cout<<"la somma dei valori postivi e': "<<s_positivi<<"\n";
	cout<<"la somma dei valori negativi e': "<<s_negativi<<"\n";
}
