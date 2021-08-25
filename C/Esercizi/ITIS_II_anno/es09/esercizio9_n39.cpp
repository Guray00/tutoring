
#include <iostream>
using namespace std;
int main (){
	int c=0,k,nc,a,b;
	cout<<"inserisci il valore di confronto\n";
	cin>>k;
	cout<<"inserisci il numero di confronti da effettuare\n";
	cin>>nc;
	while(nc>0){
		cout<<"inserisci il primo valore\n";
		cin>>a;
		cout<<"inserisci il secondo valore\n";
		cin>>b;
		if(a*b==k)
			c++;
		nc--;
	}
	cout<<c<<" prodotti sono uguali a "<<k;
	return 0;
}

