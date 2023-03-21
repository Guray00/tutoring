#include <stdio.h>
#include <string.h>

int main() {
   char str[100], lettera, sostituzione;
   int lunghezza, i;

   printf("Inserisci una stringa: ");
   fgets(str, sizeof(str), stdin);

   printf("Inserisci la lettera da sostituire: ");
   scanf("%c", &lettera);

   getchar(); // Consuma il carattere di fine riga dopo la lettura della lettera

   printf("Inserisci la lettera di sostituzione: ");
   scanf("%c", &sostituzione);

   lunghezza = strlen(str) - 1; // Calcola la lunghezza della stringa e toglie il carattere di fine riga

   for(i = 0; i < lunghezza; i++) {
      if(str[i] == lettera) {
         str[i] = sostituzione; // Sostituisce la lettera con la lettera di sostituzione
      }
   }

   printf("La stringa modificata e': %s", str);

   return 0;
}
