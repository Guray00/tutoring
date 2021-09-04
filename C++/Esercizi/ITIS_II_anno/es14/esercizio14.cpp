#include <iostream>
using namespace std;
int main (){
	int n,n2,r,c;
	cout<<"inserisci un numero\n";
	cin>>n;
	n2=n-1;
	c=n-2;
	while(n2>1){
		r=n%n2;
		if(r==0){
		cout<<"numero non e' primo\n";
		break;
		}
		else
		n2=n2-1;
		c--;
	}
	if(c==0){
		cout<<"numero primo\n";
	}
	return 0;
}
