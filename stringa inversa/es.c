#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int lunghezza, i;

   printf("Inserisci una stringa: ");
   fgets(str, sizeof(str), stdin);

   lunghezza = strlen(str) - 1; // Calcola la lunghezza della stringa e toglie il carattere di fine riga

   printf("La stringa invertita e': ");
   for(i = lunghezza - 1; i >= 0; i--) {
      printf("%c", str[i]);
   }

   return 0;
}
