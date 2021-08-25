
#include <iostream>
using namespace std;
int main (){
	float k,n;
	int n_maggiori=0, c;
	cout<<"inserisci il valore di riferimento\n";
	cin>>k;
	cout<<"inserisci quanti numeri vuoi comparare\n";
	cin>>c;
	while(c>0){
		cout<<"inserisci il numero da comparare\n";
		cin>>n;
		if(n>k)
		n_maggiori++;
		c--;
	}
	cout<<"tra i numeri inseriti "<<n_maggiori<<" sono maggiori di "<<k;
	return 0;
}

