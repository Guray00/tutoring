#include <iostream>
using namespace std;
int main(){
	int n, c_multipli=0;
	cout<<"inserisci la grandezza del vettore\n";
	cin>>n;
	int v[n];
	for(int i=0;i<n;i++){
		cout<<"inserisci il valore numero "<<i+1<<" nel vettore\n";
		cin>>v[i];
		if(v[i]%5==0)
			c_multipli++;
	}
	cout<<"nel vettore sono presenti "<<c_multipli<<" multipli di 5\n";
}
