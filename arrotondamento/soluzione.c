#include <stdio.h>

int main() {
    float numero;
    int risultato;

    printf("Inserisci un numero float: ");
    scanf("%f", &numero);

    // Calcolo della parte decimale
    float decimale = numero - (int) numero;

    // Arrotonda per eccesso se la parte decimale è maggiore o uguale a 0.5
    if (decimale >= 0.5) {
        risultato = (int) numero + 1;
    } else {
        risultato = (int) numero;
    }

    printf("Numero arrotondato: %d\n", risultato);

    return 0;
}
