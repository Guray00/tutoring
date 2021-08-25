
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

long visualizzazione(int v[],int n, int i){
	if(i>=n)
		return 0;
	cout<<i<<" "<<v[i]<<endl;
	return visualizzazione(v,n,i+2);
}

int main (){
	srand(time(0));
	int n;
	cout<<"inserisci la grandezza del vettore\n";
	cin>>n;
	int v[n];
	for(int i=0;i<n;i++){
		v[i]=rand()%250+20;
		cout<<i<<" "<<v[i]<<endl;	
	}
	
	cout<<"visualizzazione indici pari\n";	
	visualizzazione(v,n,0);
}
