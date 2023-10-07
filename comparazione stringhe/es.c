#include <stdio.h>
#include <string.h>
#define N 100

int main() {

  int l, m, i;
  
  char stringa[N];
  char stringa2[N];

  // chiedo la prima stringa
  printf("Inserire una stringa: ");
  fgets(stringa, N, stdin);

  // chiedo la seconda stringa
  printf("Inserire una stringa: ");
  fgets(stringa2, N, stdin);

  // calcolo la lunghezza delle stringhe
  l = strlen(stringa);
  m = strlen(stringa2);

  // se le stringhe hanno una lunghezza diversa, sicuramente saranno diverse
  if (l != m) {
    printf("Le stringhe sono diverse\n");
  } 

  // se non sono diverse, ne segue che sono uguali
  else {
    for (i = 0; i < l; i++) {
      if (stringa[i] != stringa2[i]) {
        printf("Le stringhe sono diverse\n");
        return 0;
      }
    }
    // se arrivo qua, non sono mai uscito
    printf("Le stringhe sono uguali\n");
  }
  
  return 0;
}