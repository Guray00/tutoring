#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  float prezzo, ptotale, tmp;
  
  printf("quante persone ci sono? ");
  scanf("%d", &n);

  printf("quale il prezzo a persona? ");
  scanf("%f", &prezzo);

  tmp = prezzo*n; // senza sconto
  if(n>15){
    ptotale = tmp-((tmp * 7) /100);
  }
  else if(n>10 && n<=15){
    ptotale=tmp-((tmp*5)/100);
  }
  else{
    ptotale = tmp;
  }

  printf("\nil prezzo totale è di %.2f euro\n", ptotale);
	return 0;
}