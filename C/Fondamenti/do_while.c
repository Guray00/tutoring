
#include <stdio.h>

int main(){

	int n;

	do {
		printf("\ninserisci un numero dispari: ");
		scanf("%d", &n);
	}	while (n%2==0);	

		printf("\n\nPerfetto! Hai inserito il numero dispari %d", n);
	

	return 0;
}