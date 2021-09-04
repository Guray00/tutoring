
#include <iostream>
using namespace std;

float p=1.618;

float sez_aurea(int n){
	if(n==0)
		return 1;
	return p*sez_aurea(n-1);
}

int main(){
	int n;
	cout<<"inserisci il valore della potenza\n";
	cin>>n;
	cout<<sez_aurea(n);
}
