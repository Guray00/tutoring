#include <iostream>
using namespace std;

// inizio 
int main(){

	int count = 0;
    int somma = 0;

    int n = -1;

    while(n != 0){

        cout << "Inserisci un numero: ";
        cin>>n;
        cout<<"";

        count = count+1;
        somma = somma + n;

    }

    cout<<"La somma vale: "<<somma<<endl;
    cout<<"Hai inserito " << (count-1) << " elementi"<<endl;

    // fine
	return 0;

}