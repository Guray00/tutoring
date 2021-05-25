#include <stdlib.h>
#include <stdio.h>
#include "test1.cpp"

main(){
	coda c = creaCoda();
	enqueue(c, 10);
	enqueue(c, 2);
	enqueue(c, 3);
	enqueue(c, 4);
	enqueue(c, 5);
	enqueue(c, 6);


	/*
	// === ESERCIZIO 1
	coda c2 = shoeHalfC(c);
	printf("stampa vettore c2");

	// stampo il vettore c2
	for (int i= 0; i <= c2->pos; i++){
		printf("\nelemento %d: %d", i, (*c2).v[i]);
	}*/


	// === ESERCIZIO 2
	/*int risultato = sommaPrimoEultimo(c);
	printf("somma vale: %d", risultato);

	printf("\n\nstampo vettore c d");
	for (int i= 0; i <= c->pos; i++){
		printf("\nelemento %d: %d", i, (*c).v[i]);
	}*/


	/*
	pila p = creaPila();
	push(p, 10);
	push(p, 2);
	push(p, 3);
	push(p, 4);
	push(p, 5);
	push(p, 6);


	
	// === ESERCIZIO 3


	int risultato = sommaPrimoEultimo(p);
	printf("somma vale: %d", risultato);

	printf("\n\nstampo vettore p");
	for (int i= 0; i <= p->pos; i++){
		printf("\nelemento %d: %d", i, (*p).v[i]);
	}*/

}