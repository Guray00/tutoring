
#include <stdio.h>

int main(){


	printf("Inserisci un numero: ");

	int n;
	scanf("%d", &n);

	/*
	viene utilizzato per eseguire un numero 
	che non si sa a priori di volte una serie
	di operazioni
	*/

	//fino a quando la condizione è rispettata, fai qualcosa
	while(n%2==0){
		printf("\nNo, inserisci un numero dispari: ");
		scanf("%d", &n);
	}


	printf("\n\nPerfetto! Hai inserito il numero dispari %d", n);

	return 0;
}