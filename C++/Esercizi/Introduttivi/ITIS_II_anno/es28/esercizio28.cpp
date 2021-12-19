
#include <iostream>
#include <iomanip>
using namespace std;
int main (){

	char operatore;
	float a,b;
	cout<<"inserisci l'operatore da utilizzare\n";
	cin>>operatore;
	while (operatore!='*'&&operatore!='+'&&operatore!='-'&&operatore!='/'){
		cout<<" il carattere inserito non e' accettato\n";
		cin>>operatore;
	}
	cout<<"inserisci il primo valore\n";
	cin>>a;
	cout<<"inserisci il secondo valore\n";
	cin>>b;
	if(operatore=='/')
		if(b==0)
			do{
				cout<<"impossibile eseguire l'operazione, inserire il valore b maggiore di 0\n";
				cin>>b;
			}while(b==0);
	switch(operatore){
		case'+': a+=b;
			break;
		case'-': a-=b;
			break;
		case'*': a*=b;
			break;
		case'/': a/=b;
	}
	cout<<"il risultato dell' operazione e' "<<setprecision(3)<<a;
	return 0;
}

