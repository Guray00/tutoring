// versione più compatta

#include <stdio.h>
#include <stdlib.h>

//arrivo
int main(){
  int n, i, n2=0;
  float si, sf, sf2, tmp;

  // chiediamo all'utente di inserire lo spessore
  printf("Inserisci lo spessore: ");
  scanf("%f", &si);

  // chiediamo all'utente di inserire il numero di laminatoi
  printf("Inserisci il numero di laminatoi: ");
  scanf("%d", &n);

  // scorriamo tutti i laminatoi presenti
  sf=si;
  
  for(i=0; i<n; i++){
      sf = sf - sf * 0.1;
  }

  // B =================================
  printf("Quale spessore vorresti ottenere: ");
  scanf("%f", &sf2);
  tmp = si;

  // fino a quando non ho raggiunto lo spessore desiderato
  // fino a quando non raggiungo sf2
  // fino a quando tmp non raggiunge sf2
  while(tmp > sf2){
    tmp = tmp - tmp * 0.1;
    n2++;
  }
  
  printf("Lo spessore finale e': %.2f\n", sf); 
  printf("Per ottenere lo spessore finale %f servono %d laminatoi\n", sf2, n2);
	return 0;
}