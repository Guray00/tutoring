#include <stdio.h>
#include <stdlib.h>

int main(){

  float temperatura[4];
  float pressione  [4];
  int scelta, i;
  float maxT, maxP, val, minT, minP, val2;

  // inizializziamo i valori
  for(i=0; i<4; i++){
    printf("inserisci il valore %d-esimo di temperatura: ", i+1);
    scanf("%f", &temperatura[i]);
  }

  for (i = 0; i < 4; i++){
    printf("Inserisci il valore %d-esimo di pressione: ", i+1);
    scanf("%f", &pressione[i]);
  }

  printf("\n\n");
    printf("Inserisci una delle seguenti scelte:\n");
    printf("1 - stampa i valori\n");
    printf("2 - trova il max di temperatura e pressione\n");
    printf("3 - trova il min di temperatura e pressione\n");
    printf("4 - cercare la posizione di un valore\n");
      
  do{

  
    printf("\nScelta: ");
    scanf("%d", &scelta);

    switch(scelta){

      // stampa valori
      case 1:
        printf("Temperatura: ");
        for(i=0; i<4; i++){
          printf("%.2f ", temperatura[i]);
        }

        printf("\nPressione: ");
        for(i=0; i<4; i++){
          printf("%.2f ", pressione[i]);
        }
        
        break;
      
      // trova valore max
      case 2:
        maxT = temperatura[0];
        maxP = pressione[0];
        for(i=1; i<4; i++){
          if(temperatura[i]>maxT){
            maxT=temperatura[i];
          }

          if(pressione[i] > maxP){
            maxP = pressione[i];
          }
        }

        printf("Max temperatura: %f\n", maxT);
        printf("Max pressione: %f\n", maxP);
        break; // !!!!

      // minimo
      case 3:
        minT= temperatura[0];
        minP=pressione[0];
        for(i=1; i<4; i++){
          if(temperatura[i]<minT){
            minT=temperatura[i];
          }

          if(pressione[i]<minP){
            minP=pressione[i];
          }
        }
        printf("Min temperatura: %f\n", minT);
        printf("Min pressione: %f\n", minP);
      break;

      case 4:
      
        printf("Inserisci il valore di temperatura da cercare: ");
        scanf("%f", &val);
        for(i=0; i<4; i++){
          if(temperatura[i]==val){
            printf("il valore %.2f si trova in posizione %d\n", val, i);
        }

        printf("Inserisci il valore di pressione da cercare: ");
        scanf("%f", &val2);
        for(i=0; i<4; i++){
          if(pressione[i]==val2){
            printf("il valore %.2f si trova in posizione %d\n", val2, i);
          }  
        }
      break;
        }
    printf("\n\n");
  } 
  }while(scelta > 0);
  return 0;
}