#include <stdio.h>

main(){
    int num, len, val, somma, sommax, max;

    printf("Inserire il numero di sequenze: ");
    scanf("%d", &num);

    // Viene chiesta la quantità di valori presenti in ogni sequenza
    for(int i=1; i<=num; i++){
        printf("Inserire la lunghezza della sequenza: ");
        scanf("%d", &len);
        somma = 0;

        // Vengono chiesti i valori della sequenza
        for(int j=0; j<len; j++){
            printf("Inserire valore: ");
            scanf("%d", &val);
            // Si calcola la somma dei valori
            somma = somma + val;
        }

        // Si chiede se la somma della sequenza attuale è più grande della somma maggiore
        if(i==1 || somma>sommax){
            // La somma maggiore diventa quella attuale
            sommax = somma;
            // Viene salvato in max il numero della sequenza
            max = i;
        }
    }

    printf("La sequenza con la somma massima è la %da", max);
}