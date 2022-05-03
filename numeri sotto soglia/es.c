#include <stdio.h>

int main(){
    int n, numero, somma;
    somma = 0;

    do{
        printf("inserire il valore di un numero: ");
        scanf("%d", &numero);
      
        if (numero>=10){
            somma = somma + numero;
        }
    }
    while (!(numero<10));

    printf("la somma sara' %d\n", somma);

    return 0;
}