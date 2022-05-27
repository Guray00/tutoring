#include <stdio.h>
#include <stdlib.h>

// utility to print an array
void printArray(int* v, int n){
	printf("[");
	for (int i = 0; i < n; i++)
		printf(" %d", v[i]);
	printf(" ]\n");
}


// funzione che si occupa di cercare gli
// elementi pari all'interno del vettore
// e inserirli nel vettore2
void cercaPari( int vettore[], int dim, int vettore2[] ){
  // utilizzo x come indice del vettore2
  // in modo da sapere in quale posizione voglio scrivere
  int x = 0;
  
  for( int i=0;i<dim;i++)
    {
      // se l'elemento è pari...
      if (vettore[i]%2==0)
      {
        // lo inserisco all'interno dell'altro vettore
        vettore2[x] = vettore[i];

        // lo incremento in modo che il prossimo numero che 
        // inserisco sia in posizione corretta
        x++;
      }
    }
}


// restituisca il numero di elementi pari all'interno
// del vettore
int contaPari(int vettore[], int dim){
  int conta=0; 
  for(int i = 0; i<dim;i++ )
    {
      if(vettore[i]%2==0)
      {
        conta=conta+1;
      }
    }

  // quando arrivo qua significa che ho controllato
  // tutto il vettore, per cui ho finito di contare
  return conta;
}


int main(){
  int dim1,i;

  // chiedo la lunghezza del vettore
  printf("Inserire lunghezza vettore: ");
  scanf("%d", &dim1);

  // creiamo il vettore
  int vettore[dim1];

  // fai inserire gli elementi del vettore
  for(i=0;i<dim1;i++)
    {
      printf("Inserisci un numero: ");
      scanf("%d", &vettore[i]);
    }    

  // salvo dentro dim2 la lunghezza
  // del nuovo vettore
  int dim2 = contaPari(vettore, dim1);

  // creo un nuovo vettore lungo dim2
  // in modo da memorizzare gli elementi pari
  int vettore2[dim2];

  cercaPari(vettore, dim1, vettore2);
  printArray(vettore2, dim2);
    
    
  return 0;

}