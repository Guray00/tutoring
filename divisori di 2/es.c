#include <stdio.h>

int f(int n){

	// se n è dispari
	if(n%2 != 0){
		return 0;
	}

	// caso base
	else {
		return 1+f(n/2);
	}

}

int main(){

	int n, risultato;
	printf("Inserisci un numero: ");
	scanf("%d", &n);

	risultato = f(n);

	printf("Il risultato vale %d", risultato);

	return 0;
}