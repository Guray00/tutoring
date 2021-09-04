
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream a;
	int n;
	a.open("multipli5.txt",ios::out);
	cout<<"inserisci la sequanza di numeri da copiare su file\n (0) interrompe la sequenza\n";
	do{
		cin>>n;
		if(n%5==0){
			a<<n<<" ";
		}
	}while(n!=0);
}

