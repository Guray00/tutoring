#include <iostream>

using namespace std;

bool isPari(int a){
	// restituisco vero se è pari, falso se è dispari

	//per controllare se è pari si controlla se
	// da resto la divisione per 2

	// se non da resto dividendo per 2...
	if (a%2 == 0){
		return true;
	}

	else{
		return false;
	}

}


int main(){

	
	int a = 3;

	bool b = (a==4);

	cout<<b;

	cout<<endl<<endl<<endl<<endl;

	cout<<"Controllo se 4 è pari: "<< isPari(4)<<endl;
	cout<<"Controllo se 5 è pari: "<< isPari(5)<<endl;


	a = 0;

	if (a==0){
		cout<<"la condizione è vera"<<endl;
	}

	// 0 => false
	// 1 => true
	return 0;
}