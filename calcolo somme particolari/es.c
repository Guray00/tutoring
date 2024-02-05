#include <stdio.h>
#include <stdlib.h>
 
int sommaT(int);
int sommaQ(int);
int sommaP(int);

int main() {
  
  int comando = 1, __sommaT, __sommaQ, __sommaP, n;

  while(comando > 0)
  {
    printf("comando 0 -> termina il programma\n");
    printf("comando 1 -> Calcola il numero T(n)\n");
    printf("comando 2 -> Calcola il numero Q(n)\n");
    printf("comando 3 -> Calcola il numero P(n)\n");

    scanf("%d", &comando);

    switch(comando)
    {
      case 0: break;

      case 1:
      {
        do
        {
          printf("inserire n: ");
          scanf("%d", &n);
        } while(!(n>0));
        
        __sommaT = sommaT(n);

        printf("T(%d) = %d\n", n, __sommaT);
      
      } break;

      case 2:
      {
        do
        {
          printf("inserire n: ");
          scanf("%d", &n);
        } while(!(n>0));

        __sommaQ = sommaQ(n);

        printf("Q(%d) = %d\n", n, __sommaQ);
        
      } break;

      case 3:
      {
        do
        {
          printf("inserire n: ");
          scanf("%d", &n);
        } while(!(n>0));

        __sommaP = sommaP(n);

        printf("P(%d) = %d\n", n, __sommaP);
      } break;
    }

    printf("\n");
  }
  return 0;
}

int sommaT(int n)
{
  int __sommaT = 0, i;

  for(i=1; i<=n; i++)
  {
    __sommaT = __sommaT + i;
  }

  return __sommaT;
}

int sommaQ(int n)
{
  int __sommaQ = 0, i;

  for(i=1; i<=(2*n-1); i++)
  // n = 5
  // Q(5) = 1 + 3 + 5 + 7 + 9 = 25
  {
    if(i%2!=0)
    {
      printf("sommo il numero %d\n", i);
      __sommaQ = __sommaQ + i;
    }
    else
    {
      printf("non sommo il numero %d\n", i);
    }
  }

  return __sommaQ;
}

int sommaP(int n)
{
  int __sommaP = 1, numero_precedente = 1, i;

  // n = 4
  //  P(4) = 1 + 4 + 7 + 10
  for(i=1; i<=(3*n-2); i++)
  {
    if(i == numero_precedente + 3)
    {
      printf("sommo il numero %d\n", i);
      __sommaP = __sommaP + i;
      numero_precedente = i;
    }
    else
    {
      printf("non sommo il numero %d\n", i);
    }
  }

  return __sommaP;
}