
#include <iostream>
using namespace std;
int main (){
	int c,c_maggiori=0,c_uguali=0,c_minori=0;
	float k,n;
	cout<<"inserisci il valore di riferimento\n";
	cin>>k;
	cout<<"inserisci quanti numeri vuoi inserire\n";
	cin>>c;
	while(c>0){
		cout<<"inserisci il numero da comparare\n";
		cin>>n;
		if(n>k)
		c_maggiori++;
		else if(n==k)
		c_uguali++;
		else
		c_minori++;
		c--;
	}
	cout<<"ci sono "<<c_maggiori<<" maggiori di "<<k<<"\n";
	cout<<"ci sono "<<c_uguali<<" uguali di "<<k<<"\n";
	cout<<"ci sono "<<c_minori<<" minori di "<<k<<"\n"
	;
	return 0;
}

