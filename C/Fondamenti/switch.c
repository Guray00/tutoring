
#include <stdio.h>

int main(){

	printf("Inserisci un numero: ");

	int n;
	scanf("%d", &n);

	// controparte con if
	/*if(n&2 == 0){
		printf("pari");
	}

	else {
		printf("dispari");
	}*/


	switch( n%2 ){

		case 0:
			printf("pari");
			break;

		case 1:
			printf("dispari");
			break;

	}
	
	return 0;
}