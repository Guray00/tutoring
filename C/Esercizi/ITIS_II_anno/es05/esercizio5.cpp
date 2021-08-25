
#include <iostream>
using namespace std;
int main(){
	int a,b,s=0;
	cout<<"inserisci il primo numero"<<endl;
	cin>>a;
	cout<<"inserisci il secondo  numero"<<endl;
	cin>>b;
	while(b>0){
		b=b-1;
		s=s+a;
	}
	cout<<"il prodotto e' "<<s<<endl;
	return 0;
}


