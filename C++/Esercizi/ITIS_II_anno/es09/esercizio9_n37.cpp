
#include <iostream>
using namespace std;
int main (){
	int h,k,c,cn,n;
	cout<<"inserisci il primo valore\n";
	cin>>h;
	cout<<"inserisci il secondo valore\n";
	cin>>k;
	if(h>k)
		swap(h,k);
	cout<<"inserisci quanti valori si vogliono confrontare\n";
	cin>>cn;
	while(cn>0){
		cout<<"inserisci il valore da confrontare\n";
		cin>>n;
		if(n>=h && n<=k)
			c++;
		cn--;	
	}
	cout<<c<<" valori sono compresi tra "<<h<<" e "<<k;
	return 0;
}

