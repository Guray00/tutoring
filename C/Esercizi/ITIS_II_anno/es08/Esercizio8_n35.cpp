
#include <iostream>
using namespace std;
int main (){
	int c_multipli,c,k,n;
	cout<<"inserisci il numero di riferimento\n";
	cin>>k;
	cout<<"inserisci quanti numeri vuoi comparare\n";
	cin>>c;
	while(c>0){
		cout<<"inserisci il numero da comparare\n";
		cin>>n;
		if(n%k==0)
		c_multipli++;
		c--;
	}
	cout<<"ci sono "<<c_multipli<<" numeri multipli di "<<k<<"\n";
	return 0;
}

