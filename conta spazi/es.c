#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int spazi = 0;

   printf("Inserisci una stringa: ");
   fgets(str, sizeof(str), stdin);

   for(int i = 0; i < (int) strlen(str); i++) {
      if(str[i] == ' ') {
         spazi++;
      }
   }

   printf("Numero di spazi presenti nella stringa: %d", spazi);

   return 0;
}