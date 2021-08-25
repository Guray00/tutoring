
#include <iostream>
using namespace std;
int main(){
	int c,n,s=0;
	cout<<"inserisci il numero di valori da inserire"<<endl;
	cin>>c;
	while(c>0){
	c=c-1;
	cout<<"inserisci il numero"<<endl;
	cin>>n;
	s=s+n;
	}
	cout<<"la somma dei numeri e' "<<s<<endl;
}


