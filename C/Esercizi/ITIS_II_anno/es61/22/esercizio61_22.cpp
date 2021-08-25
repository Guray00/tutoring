
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream a,b;
	int n;
	a.open("positivi.txt",ios::out);
	b.open("negativi.txt",ios::out);
	cout<<"inserisci la sequanza di numeri da copiare su file\n (0) interrompe la sequenza\n";
	do{
		cin>>n;
		if(n>0)
			a<<n<<" ";
		else if(n<0)
			b<<n<<" ";
	}while(n!=0);
}

