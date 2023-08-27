#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, min, min2;
  printf("Inserisci la sequenza: ");

  // se è la prima volta che vedo un valore, questo è il mio minimo
  // ci salviamo il minimo fuori dal ciclo 
  // per avere un riferimento di partenza
  scanf("%d", &n);
  min  = n; // min contiene il minore assoluto
  min2 = n;
  
  while(n != 0){
    scanf("%d", &n);

    // se metto lo zero, non proseguo
    if (n==0){ break;}
      
    if(n<min){
      min2=min;
      min=n;
    }

    // è ridondante mettere la seconda condizione!
    // se siamo arrivati qua significa che era già vera
    else if(n<min2 && n>= min){
      min2=n;
    }
  } 

  printf("i due minimi sono: %d %d", min, min2);
  
	return 0;
}