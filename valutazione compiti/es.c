#include <stdio.h>
#include <stdlib.h>

int main(){
   int votofisica, votomatematica, votoinformatica, percentuale;
   float media;

  // fare tutti i printf e gli scanf
	printf("inserire il voto di fisica: ");
  scanf("%d", &votofisica);
  
  printf("inserire il voto di matematica: ");
  scanf("%d", &votomatematica);
  
  printf("inserire il voto di informatica: ");
  scanf("%d", &votoinformatica);

  // fare la media
  media = (votofisica+votomatematica+votoinformatica)/3.0;
  
  // trovare la percentuale
  percentuale = media*10;
  
	// scriviamo gli if in base ai percentuale, partendo da
  if(percentuale>=90){
    printf("%d, il grado è A", percentuale);
  }

  // se la percentuale è compresa tra 80 e 90 (esluso)
  else if (percentuale>=80){
    printf("%d, il grado è B", percentuale);
  }

  // se la percentuale è compresa tra 70 e 80 (escluso)
  else if (percentuale>=70){
    printf("%d, il grado è C", percentuale);
  }
    
  // se la percentuale è compresa tra 60 e 70 (escluso)
  else if (percentuale>=60){
    printf("%d, il grado è D", percentuale);
  }

  else if (percentuale>=40){
    printf("%d, il grado è E", percentuale);
  }

  else {
    printf("%d, il grado è F", percentuale);
  }

  
  return 0;
}
