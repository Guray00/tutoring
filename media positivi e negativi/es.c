#include <stdio.h>
#include <stdlib.h>

int main(){

	int npositivi, nnegativi, n;

  printf("inserire il valore di n: ");
  scanf("%d", &n);
  
  
  float mediapositivi, medianegativi;
  float sommapositivi, sommanegativi;

  // azzeriamo le variabili
  sommapositivi = 0;
  sommanegativi = 0;
  npositivi = 0;
  nnegativi = 0;
  
  for (int i=0; i<n; i = i+1){
    int numero;
    printf("inserire il numero: ");
    scanf("%d", &numero);

    if (numero>0)
    {
      sommapositivi = sommapositivi + numero;
      npositivi = npositivi + 1;
    }
  else
    {
      sommanegativi = sommanegativi+numero;
      nnegativi = nnegativi + 1;
    }
  }

  // evitiamo la divisione per zero
  if (npositivi == 0) npositivi = 1;
  if (nnegativi == 0) nnegativi = 1;
  
  
  mediapositivi = sommapositivi/npositivi;
  medianegativi = sommanegativi/nnegativi;  

  printf("\nla media positiva è: %f\n", mediapositivi);
  printf("la media negativa è: %f\n", medianegativi);
	
  
  return 0;

}