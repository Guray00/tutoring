
#include <iostream>
using namespace std;
int main (){
	float s=0,n;
	int c=-1;
	do{
		cout<<"inserisci il valore da sommare\n";
		cin>>n;
		s+=n;
		c++;
	}while(n!=0);
	cout<<"il numero di iterazioni e' "<<c<<"\n";
	cout<<"la somma dei numeri e' "<<s;
	return 0;
}

