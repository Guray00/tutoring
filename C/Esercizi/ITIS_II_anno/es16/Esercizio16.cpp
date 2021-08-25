
#include <iostream>
using namespace std;
int main (){
	int a,b;
	cout<<"inserisci un numero\n";
	cin>>a;
	b=a-1;
	while(b>0){
		a=a*b;
		b--;
	}
	cout<<"il fattoriale e' "<<a;
	return 0;
}
