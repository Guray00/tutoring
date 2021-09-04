
#include <stdio.h>

int main(){

	printf("Inserisci un numero: ");
	int n;
	scanf("%d", &n);

	/*
	while(n%2==0){
		printf("\nNo, inserisci un numero dispari: ");
		scanf("%d", &n);
	}
	*/
	
	for( ; n%2==0; ){
		printf("\nNo, inserisci un numero dispari: ");
		scanf("%d", &n);
	}

	printf("\n\nPerfetto! Hai inserito il numero dispari %d", n);

	return 0;
}