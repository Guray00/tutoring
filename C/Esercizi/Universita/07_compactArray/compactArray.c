#include <stdio.h>
#include <stdlib.h>

/*
Scrivere la funzione C che riceve in ingresso un array di 
interi A di dimensione N, ed opera nel modo
seguente:
• sostituisce le sequenze di valori uguali adiacenti in A 
con la prima occorrenza del valore,
compattando i valori rimanenti verso sinistra, e completando 
l'array a destra con un numero di zeri
pari al numero di elementi rimossi.
La funzione deve anche restituire tra i parametri formali 
il numero dei valori rimossi M. 
*/


// funzione di utility  per stampare gli array
void printArray(int* v, int n){
	printf("[");
	for (int i = 0; i < n; i++)
		printf(" %d", v[i]);
	printf(" ]\n");
}




void funzione(int* A, int N, int* M){
    
    // imposto la prima posizione come "giusta"
    *M = 0;

    // il - (*M) serve a non cadere in un loop infinito
    // in cui siamo sempre minori di N perchè decrementiamo
    // il contatore
    for (int i = 1; i < N - (*M); i++){

        // confrontiamo con quello diverso preso in esame
        if(A[i] == A[i-1]){

            // - M per lo stesso motivo di prima, trasla
            for (int j=i; j<N-1-(*M); j++){
                A[j] = A[j+1];         
            }

            // se è giusto conto un'altro rimosso e 
            // ricontrollo sulla stessa posizione, perchè
            // la condizione potrebbe ancora essere vera
            (*M)++;
            i--;

        }

        // se quello preso in esame è diverso da quello
        // che sto controllando allora da ora cerco il nuovo
        // elemento
    }

    // aggiunge in fondo gli zeri
    for(int i = 0; i < (*M); i++){
        A[N-i-1] = 0;
    }
   
}


int main(){

    int A []= {2,3,3,3,1,5,1,4,4,7,6,7,7};
    int M;
    //13
	
    funzione(A, 13, &M);
    printArray(A, 13);

	return 0;

}