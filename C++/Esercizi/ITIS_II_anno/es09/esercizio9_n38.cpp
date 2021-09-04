
#include <iostream>
using namespace std;
int main (){
	int c,n,np,o=0;
	cout<<"inserisci il numero di valori\n";
	cin>>c;
	cout<<"inserisci valore\n";
	cin>>n;
	np=n;
	while(c>1){
		cout<<"inserisci valore\n";
		cin>>n;
		if(n<np)
			o=1;
		c--;
		np=n;	
	}
	if(o==1)
		cout<<"NON SONO IN ORDINE CRESCENTE";
	else
		cout<<"SONO IN ORDINE CRESCENTE";
	return 0;
}

