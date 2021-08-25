#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cout<<"inserisci la grandezza del vettore\n";
	cin>>n;
	int v[n], v2[n];
	for(int i=0; i<n; i++){
		cout<<"inserisci il valore numero "<<i+1<<" del vettore\n";
		cin>>v[i];
		v2[i]=pow(v[i],2);
	}	
	for(int i=0; i<n; i++)
	cout<<"il valore vettore "<<i+1<<" e': "<<v[i]<<" ed il quadrato e' "<<v2[i]<<"\n";
}
