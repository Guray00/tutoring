#include<iostream>

using namespace std;

/*
5! = 5*4!
5! = 5*4*3!

5! = 5*4*3*2*1
4! = 4*3*2*1
3! = 3*2*1
*/

int fattoriale(int i){

		// voglio una funzione che faccia moltiplicazione
		// a ogni passaggio moltiplica per cosa
  	if(i==0){
    	return 1;
  	}	
	 return i * fattoriale(i-1);
}


/*
	fattoriale(5)
			fattoriale(4)
					.
					.
					.
								fattoriale(0) => fattoriale(1-1) => 1
						1*fattoriale(0) => 1
					2*fattoriale(1) => 2
				3*fattoraile(2) => 6
			4*fattoriale(3) => 24
		5*fattoriale(4) => 120

	return 120;
	
				
					
							

*/

// 5 * 4 * 3 * 2 .....



int main(){

	int n;
	cout<<"Inserisci un numero: ";
	cin>>n;

	int risultato = fattoriale(n);

	cout<<"risultato: "<<risultato;
	
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