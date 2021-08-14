#include <stdio.h>

int main(void) {


	//int a = 5;

	int a; // dichiarazione
	a = 3; // inizializzazione, assegnamento


	// = 	=> assegnamento
	// ==	=> verifica
	if (a == 5){
		printf("a vale 5!");
	}

	// ! => not

	if (a != 5){
		printf("a non vale 5");
	}

	// stampare 200 volte ciao


	// assegnamento variabile contatore; condizione; incremento
	for (int i = 0; i < 200; i = i + 1){
		// b ha visibilità di blocco, non viene visto fuori dalle graffe
		int b = 5;
		//printf("ciao\n");
	}
	
	while (a < 80){
		// se la condizione è vera viene eseguito questo blocco di codice
		a = a + 1;
	}

	/*do {
		a = a+1;
	} while (a < 90);*/


	// se vogliamo stampare un intero %d
	printf("\na vale: %d\n\n", a);
	printf("Inserisci un numero da salvare in a: ");
	scanf("%d", &a);
	printf("Il numero che hai inserito e': %d", a);
	// se la condizione non è vera, esce

	// creo un vettore di 5 elementi
	int vettore[5];
	
	for (int i = 0; i < 5; i = i+1){
		//vettore[i] significa la i-esima cella del contenitore "vettore"
		vettore[i] = i+1;
	}


	return 0;
}