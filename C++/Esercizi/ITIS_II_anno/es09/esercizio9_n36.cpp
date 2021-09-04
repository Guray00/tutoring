
#include <iostream>
using namespace std;
int main(){
	int c=0,s=0,n;
	while(s<100){
		cout<<"inserisci il numero da sommare\n";
		cin>>n;
		s+=n;
		c++;
	}
	cout<<"hai inserito "<<c<<" numeri\nla loro somma e': "<<s;

}
