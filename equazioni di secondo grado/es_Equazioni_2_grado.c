#include <stdio.h>

int delta(int, int, int);
void soluzioni(float, float, float, float*, float*);

int main() {
  int comando = 1, a, b, c, delta_valore;
  float soluzione1, soluzione2;
  
  while(comando > 0) {
    printf("CMD 0 -> Termina il programma\n");
    printf("CMD 1 -> Calcolare il delta di un'equazione di secondo grado\n");
    printf("CMD 2 -> Calcolare le soluzioni di un equazione di secondo grado\n");

    scanf("%d", &comando);

    switch(comando) {
      case 0: break;
      case 1: {
        printf("Inserire il coeffiente a: ");
        scanf("%d", &a);
        printf("Inserire il coeffiente b: ");
        scanf("%d", &b);
        printf("Inserire il coeffiente c: ");
        scanf("%d", &c);

        delta_valore = delta(a, b, c);    // 64 -> delta_valore = 64;

        printf("il delta e' %d\n", delta_valore);
        
      } break;
      case 2: {
        
        printf("Inserire il coeffiente a: ");
        scanf("%d", &a);
        printf("Inserire il coeffiente b: ");
        scanf("%d", &b);
        printf("Inserire il coeffiente c: ");
        scanf("%d", &c);
        
        soluzioni((float)a, (float)b, (float)c, &soluzione1, &soluzione2);

        printf("le soluzioni dell'equazione sono %.2f e %.2f\n", &soluzione1, &soluzione2);
        
      } break;
    }
  }
  
  return 0;
}

int delta(int a, int b, int c)
{
  int delta;

  delta = (b*b)-4*(a*c);

  return delta;  // return 64;
                 // Il return restituisce SEMPRE un valore! Non devi pensare che
                 // restituisca una variabile. 
}

void soluzioni(float a, float b, float c, float* soluzione1, float* soluzione2)
{
  int delta_valore;

  delta_valore = delta((int)a, (int)b, (int)c);

  *soluzione1 = (float) (-b+delta_valore)/(2*a);
  *soluzione2 = (float) (-b-delta_valore)/(2*a);
}