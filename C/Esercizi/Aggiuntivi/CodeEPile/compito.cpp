/*
1) Nel primo c era da spiegare e scrivere l enqueue.
*/

#include <stdlib.h>
#include <stdio.h>
#include "coda.cpp"
#include "pila.cpp"



//Nel secondo c era da eliminare in una pila i minori di duecento.
void eliminaMinori200(pila p){
	
	pila p2 = creaPila();

	//finchè p non è vuoto
	while(!isEmpty(p)){
		int tmp = pop(p);

		if(tmp >= 200){
			push(p2, tmp);
		}
	}

	// p adesso è vuoto
	// p2 ha solo valori > 200

	while(!isEmpty(p2)){
		push(p, pop(p2));
	}
}



//dire in quale posizione si trova un elemento datagli dall utente. 
int trova(pila p, int elem){

	int conta     = 0;
	int posizione = -1;
	

	pila p2 = creaPila();

	while(!isEmpty(p)){
		
		int tmp = pop(p);

		if (tmp == elem){
			posizione = conta;
		}

		// salviamo da qualche parte i valori di p
		push(p2, tmp);

		conta++;
	}

	// risistemiamo p in modo da averlo uguale all'inzio
	while(!isEmpty(p2)){
		push(p, pop(p2));
	}

	return posizione;
}

void trovaConVettore(pila p, int elem){

	int conta     = 0;
	int posizione = -1;
	

	pila p2 = creaPila();

	int v[100];
	int numero_elementi_vettore = 0;
		
	while(!isEmpty(p)){
		
		int tmp = pop(p);

		
		if (tmp == elem){
			v[numero_elementi_vettore] = conta;
			numero_elementi_vettore++;
		}

		// salviamo da qualche parte i valori di p
		push(p2, tmp);

		conta++;
	}

	// risistemiamo p in modo da averlo uguale all'inzio
	while(!isEmpty(p2)){
		push(p, pop(p2));
	}

	for(int i = 0; i < numero_elementi_vettore; i++){

		// conta-v[i]-1 per sapere la posizione a partire dalla base
		// per sapere dalla cima è sufficiente v[i]
		printf("ho trovato %d alla posizione %d\n", elem, conta-v[i]-1);
	}
}


//4) Mettere gli elementi di due pile in ordine decrescente in un altra pila e restituire le due pile vuote e la pila riempita con gli elementi.


//[12, 7, 5, 2]
//[ 6, 4, 1, 0]

pila ordina(pila p1, pila p2){
	
	pila p3 = creaPila();

	while(!isEmpty(p1) && !isEmpty(p2)){

		int tmp1 = pop p1;
		int tmp2 = pop p2;

		

	}

}


main(){
	
	pila p = creaPila();

	push(p, 100);
	push(p, 1100);
	push(p, 200);
	push(p, 300);
	push(p, 400);
	push(p, 5);

	int risultato = trova(p, 400);

	printf("\nTrovato elemento %d alla posizione %d\n\n", 400, risultato);

	for (int i = 0; i <= p->pos; i++){
		printf("\nelemento %d vale: %d", i, p->v[i]);
	}


}