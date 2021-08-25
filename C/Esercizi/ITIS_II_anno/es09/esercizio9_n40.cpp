
#include <iostream>
using namespace std;
int main (){
	int cn,n,np,diff,diffmax,c=0;
	cout<<"inseirsci i numeri da confrontare\n";
	cin>>cn;
	cout<<"inserisci un valore\n";
	cin>>n;
	np=n;
	cout<<"inserisci un valore\n";
	cin>>n;
	diff=n-np;
	diffmax=diff;
	while(cn>2){
		np=n;
		cout<<"inserisci un valore\n";
		cin>>n;	
		if(n-np>diffmax){
			diffmax=n-np;
			c++;
		}
		cn--;
	}
	if(c!=0)
		cout<<"la differenza massima e' "<<diffmax;
	else
		cout<<"la differenza e' "<<diff;
	return 0;
}

