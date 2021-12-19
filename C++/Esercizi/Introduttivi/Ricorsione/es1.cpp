#include<iostream>

using namespace std;


void funzione(int i){

	cout<<i<<endl;

	// caso baso
	if (i == 10){
		return;
	}

	funzione(i+1);
	cout<<"HO CHIUSO "<<i<<endl;
}



int main(){

	/*int n;
	cout<<"Inserisci un numero: ";
	cin>>n;*/

	//funzione(1);

	funzioneA();
	cout<<"sono tornato nel main";

	// fattoriale di 5: 5*4*3*2*1

	/*
	int fattoriale=1;
	for(int i=0; i<n; i++){

    fattoriale=fattoriale*(n-i);
    
  }
  cout<<fattoriale;
	*/



	return 0;
}