#include <stdio.h>
 
int main(){
  int n, m, i, j, v1[30], v2[30], v3[30], pos=0;

  // controllo la dimensione del primo vettore
  do{
    printf("inserisci la dimensione del primo vettore: ");
    scanf("%d", &n);
  }while(n>30 || n<0);

  // controllo la dimensione del secondo vettore
  do{
    printf("inserisci la dimensione del secondo vettore: ");
    scanf("%d", &m);
  } while(m>30 || m<0);

  printf("\nPrimo vettore\n");
  for(i=0; i<n; i++){
    printf("inserisci un numero: ");
    scanf("%d",&v1[i]);
  }

  printf("\nSecondo vettore\n");
  for(i=0; i<m; i++){
    printf("inserisci un numero: ");
    scanf("%d",&v2[i]);
  }

  // scorro il secondo vettore
  for(i=0; i<m; i++){

    // scorro il primo vettore
    for(j=0; j<n; j++){

      // se l'elemento che guardo è uguale al target
      if(v2[i]==v1[j]){

        // metto nel terzo vettore
        v3[pos] = v2[i];

        // aumento la posizione
        pos++;

        // dobbiamo smettere di cercare l'elemento
        break;
      }
    }
  }

  printf("\ngli elementi comuni sono: ");
  for(i=0; i<pos; i++){
    printf("%d ", v3[i]);
  }
  
  return 0;
}