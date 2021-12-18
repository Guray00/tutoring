#include <stdio.h>
#include <stdlib.h>

/*
Siano p e q due puntatori a variabili intere. Si scriva un programma che utilizzi malloc
che svolga i seguenti punti:

 • alloca dinamicamente due variabili intere ed assegna gli 
   indirizzi corrispondenti a p e q, rispettivamente

 • memorizza nelle due variabili intere due valori inseriti dall'utente

 • stampa il contenuto delle variabili intere ed i loro indirizzi di memoria
   
 • scambia gli indirizzi di memoria in p e q e ristampa il
   contenuto delle variabili intere e dei loro indirizzi dopo lo
   scambio.   
*/


int main(){

    // alloca dinamicamente due variabili intere ed assegna gli 
    // indirizzi corrispondenti a p e q, rispettivamente

    int p;
    int q; 

    int* a= &p;
    int* b= &q;

    //memorizza nelle due variabili intere due valori inseriti dall'utente
    printf("Inserisci il valore da salvere in p: ");
    scanf("%d", &p);
    
    printf("Inserisci il valore da salvere in q: ");
    scanf("%d", &q);

    // stampa il contenuto delle variabili intere ed i loro indirizzi di memoria
    printf("Il valore di p: %d\n", p);
	printf("Il valore di q: %d\n", q);
    printf("L'indirizzo di p: %p\n", &p);
    printf("L'indirizzo di q: %p\n", &q);

    printf("\nIl valore di a: %p\n", a);
    printf("Il valore di b: %p\n", b);


    printf("\nL'indirizzo di a: %p\n", &a);
    printf("L'indirizzo di b: %p\n", &b);

    /*
    scambia gli indirizzi di memoria in p e q e ristampa il
    contenuto delle variabili intere e dei loro indirizzi dopo lo
    scambio.   
    */

    a=&q;
    b=&p;
    
    printf("\n=========\n");

    printf("Il valore di p: %d\n", p);
	printf("Il valore di q: %d\n", q);
    printf("L'indirizzo di p: %p\n", &p);
    printf("L'indirizzo di q: %p\n", &q);

    printf("\na: %d\n", *a);
    printf("b: %d\n", *b);

	
    
    return 0;

}


