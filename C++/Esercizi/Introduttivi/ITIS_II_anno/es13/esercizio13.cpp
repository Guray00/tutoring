#include <iostream>
using namespace std;
int main(){
	int n,numero=0;
	cout<<"inserisci quanti numeri pari vuoi visualizzare\n";
	cin>>n;
	while(n>0){
		cout<<numero<<"\n";
		numero=numero+2;
		n--;
	}
	return 0;
}
