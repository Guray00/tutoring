
#include <iostream>
using namespace std;
int main (){
	float somma=0,temperatura;
	int c=7;
	do{
		cout<<"inserisci la temperatura"<<endl;
		cin>>temperatura;
		somma+=temperatura;
		c--;
	}while(c>0);
	somma=somma/7;
	cout<<"la temperatura media e' \n"<<somma
	;
	return 0;
}

