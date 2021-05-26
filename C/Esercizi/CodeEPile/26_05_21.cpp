#include <stdlib.h>
#include <stdio.h>
#include "coda.cpp"

/*
funzione che modifica il contenuto di una coda mettendo il valore massimo nella posizione che verrà estratta per prima
mantenendo inalterato l'ordine
*/


void sostituisciMassimo(coda c){
	coda c2 = creaCoda();

	// troviamo il massimo
	int max = -1;
	while(!isEmpty(c)){

		int tmp=dequeue(c);
		enqueue(c2, tmp);

		if(max < tmp){
			max = tmp;
		}
	}


	enqueue(c, max);
	while(!isEmpty(c2)){
		int tmp = dequeue(c2);

		if(tmp != max){
			enqueue(c, tmp);
		}
		
	}
}



/*
funzione che verifica la correttezza nell'uso delle parentesi quadre in un espressione presa in ingresso
*/


void verificaParentesi(char s[]){
	//[(3+4)]



}


/*
funzione che restituisce la media e la somma. Se è minore di 50 "avvisa"
*/

void sommaMedia(coda c){
	// ho una coda ma non so i valori quindi
	coda c2 = creaCoda();

	float media = 0;
	int   somma = 0;
	float numero = 0;
	
	while(!isEmpty(c)){
		int tmp =  dequeue(c);
		enqueue(c2,tmp);
		somma = somma + tmp;
		numero++;
	}

	media = somma / numero;

	printf("La somma vale %d mentre la media vale %f", somma, media);
	
	if(somma < 50 ){
		printf("\nLa somma è minore di 50!");
	}

}


main (){

	coda c = creaCoda();
	enqueue(c, 1);
	enqueue(c, 7);
	enqueue(c, 3);
	enqueue(c, 0);

	/*sostituisciMassimo(c);
	for(int i =0; i <= c->pos; i++){
		printf("\nelemento %d vale: %d", i, c->v[i]);
	}*/
	//char s[5];

	//s = 'ciao';
	//verificaParentesi(s);

	//
	//prendere il valore più grande e metterlo in prima posizioneù


	// ESERCIZIO 3
	sommaMedia(c);


}