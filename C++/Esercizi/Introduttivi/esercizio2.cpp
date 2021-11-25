#include <iostream>
using namespace std;


// l'esercizio deve mostrare a schermo il numero maggiore e minore tra quelli inseriti 
// da parte dell'utente (10 numeri)

int main(){
    // inizio

    // inizializzo la variabile count a zero, servirà a contare quanti elementi sono stati inseriti
    int count;
    int maggiore = 0;
    int minore;
    int n;
    

    //  inizializzazione   condizione        incremento
    for(    count = 0   ;  count < 10  ;   count = count + 1 ){

        cout<< "Inserisci un numero: ";
        cin>>n;
        cout<<endl;

        // permette di far funzionare il programma
        if(count == 0){
            minore = n;
        }

        // controlla se il numero inserito è più piccolo del minore
        if(n < minore){
            minore = n;
        }

        // controlla se il numero inserito è più piccolo del maggiore
        if(n > maggiore){
            maggiore = n;
        }

        

    }


    cout << maggiore << endl;
    cout << minore   << endl;

	// fine
	return 0;

}