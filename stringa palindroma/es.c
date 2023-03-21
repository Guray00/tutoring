#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int lunghezza, i, j, palindromo = 1;

   printf("Inserisci una stringa: ");
   fgets(str, sizeof(str), stdin);

   lunghezza = strlen(str) - 1; // Calcola la lunghezza della stringa e toglie il carattere di fine riga

   for(i = 0, j = lunghezza - 1; i < lunghezza / 2; i++, j--) {
      if(str[i] != str[j]) {
         palindromo = 0; // Se i caratteri non corrispondono, la stringa non è un palindromo
         break;
      }
   }

   if(palindromo == 1) {
      printf("La stringa inserita e' un palindromo");
   } else {
      printf("La stringa inserita non e' un palindromo");
   }

   return 0;
}
