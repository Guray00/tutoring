#include <stdio.h>

main(){
    int n;

    // Chiede n fino a che non è un numero dispari positivo
    do{
        printf("Inserire la dimensione: ");
        scanf("%d", &n);
    }while(n%2==0 || n<0);

    // Crea le righe
    for(int i=1; i<=n; i++){
        // Crea le colonne
        for(int j=1; j<=n; j++){
            // Scrive solo se è la i-esima o la i-ultima colonna
            if(j==i || j==n-i+1)
                printf("%d", i);
            else
                printf(" ");
        }

        printf("\n");
    }
}