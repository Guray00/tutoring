

#include <iostream>
using namespace std;
int main(){
	int c_true=0, c_false=0, n;
	cout<<"inserisci la grandezza del vettore\n";
	cin>>n;
	bool vet[n];
	for(int i=0;i<n;i++){
		cin>>vet[i];
		if(vet[i]==true)
			c_true++;
	}
	c_false=n-c_true;
	cout<<"i valori 'true' sono: "<<c_true<<"\n";
	cout<<"i valori 'false' sono: "<<c_false<<"\n";
	return 0;
}

