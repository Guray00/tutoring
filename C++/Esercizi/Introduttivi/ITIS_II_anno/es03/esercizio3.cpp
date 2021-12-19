#include <iostream>
using namespace std;
int main(){
	float a,b,c,max,min;
	cout<<"inserisci il primo numero"<<endl;
	cin>>a;
	max=a;
	min=a;
	cout<<"inserisci il secondo numero"<<endl;
	cin>>b;
	if(b>max)
	max=b;
	if(b<min)
	min=b;
	cout<<"inserisci il terzo numero"<<endl;
	cin>>c;
	if(c>max)
	max=c;
	if(c<min)
	min=c;
	cout<<"il numero minore e' "<<min<<", il numero maggiore e' "<<max<<endl;
	return 0;
}


