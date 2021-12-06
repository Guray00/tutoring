/*
calcolare importo della fattura telefonica, le tariffe sono:
- primi 30 minuti costano 35 cent al minuto
- da 30 a 100 minuti costa 25 cent al minuto
- oltre 100 minuti costa 15 cent al minuto


se ho consumato 70 minuti:
    - primi 30 li pago 35
    - i rimanenti (40) li pago 25 cent

i dati richiesti sono i minuti

*/


#include <iostream>
using namespace std;


int main(){
    // INIZIO


    // leggi x
    double x;
    cin>>x;
    
    
    // costo <- 0
    double costo;
    costo=0;

    // se x <= 30
    if(x<=30){
        // costo <= x * 0.35
        costo = x * 0.35;
    
    }

    // altrimenti se (x > 30 AND z <= 100)
    else if(x > 30 && x <=100){
        // costo <= (x-30)*0.25 + 30*0.35
        costo = (x-30)*0.25 + 30*0.35;
        
    }
        
    //altrimenti
    else {
        // costo <= (x-100)*0.15 + 30*0.35 + 70*0.25
        costo = (x-100)*0.15 + 30*0.35 + 70*0.25;
    }
        

    // stampa costo
    cout<<costo<<" euro"<<endl;

	// FINE
	return 0;

}