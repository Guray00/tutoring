#include <stdio.h>

void carattere_vocale(char);
char converti_MAIUSCOLO(char);
char converti_minuscolo(char);
char shifta_carattere(int, char);

int main() {
  // Ricorda: ogni variabile, se non assegnata esplicitamente, 
  // di default è assegnata a 0.
  int comando = 1, offset;
  char carattere, nuovo_carattere, MAIUSCOLO, minuscolo;

  while(comando > 0)
    {
      // Visualizzazione del menù.
      printf("comando 0 -> Terminare il programma. \n");
      printf("comando 1 -> Verificare se un carattere è una vocale.\n");
      printf("comando 2 -> Verificare se un carattere è numerico.\n");
      printf("comando 3 -> Convertire un carattere minuscolo in maiuscolo.\n");
      printf("comando 4 -> Convertire un carattere maiuscolo in minuscolo.\n");
      printf("comando 5 -> Convertire un carattere minuscolo in maiuscolo e viceversa.\n");
      printf("comando 6 -> Fornito un offset in input restituisca il carattere “shiftato” in avanti di offset posizioni.\n");

      scanf("%d", &comando);
      getchar();

      switch(comando)
        {
        case 0: break;    // if(comando == 0) { break; }

        case 1:           // if(comando == 1) { DO STUFF HERE... }
          {
            printf("inserire il carattere: ");
            scanf("%c", &carattere);

            carattere_vocale(carattere);
          
          } 
        break;

        case 2:
          {
            printf("inserire il carattere: ");
            scanf("%c", &carattere);
            
            if(carattere<=57 && carattere>=48)
            {
              printf("il carattere e' un numero\n");
            }
            else
            {
              printf("il carattere NON e' un numero\n");
            }
          }
          break;

        case 3:
          {
            printf("inserire il carattere da convertire (minuscolo -> MAIUSCOLO): ");
            scanf("%c", &carattere);

            converti_MAIUSCOLO(carattere);
          }
          break;

        case 4:
          {
            printf("inserire il carattere da convertire (MAIUSCOLO -> minuscolo): ");
            scanf("%c", &carattere);

            converti_minuscolo(carattere);
          }
          break;

        case 5:
          {
            printf("inserire il carattere da convertire (MAIUSCOLO -> minuscolo): ");
            scanf("%c", &carattere);

            MAIUSCOLO = converti_minuscolo(carattere);

            minuscolo = converti_MAIUSCOLO(MAIUSCOLO);
          }
          break;

        case 6:
          {
            printf("inserire il carattere: ");
            scanf("%c", &carattere);

            printf("inserire il valore dell'offset: ");
            scanf("%d", &offset);

            nuovo_carattere = shifta_carattere(offset, carattere);

            printf("il carattere shiftato e' %c\n", nuovo_carattere);
          }
          break;

      }

      printf("\n");
    }
  return 0;
}

void carattere_vocale(char carattere)
{
  switch(carattere)
    {
      case 'a':    // if(carattere == 'a')
        {
          printf("il carattere e' una vocale\n");
        }
        break;

      case 'e':    // if(carattere == 'e')
        {
          printf("il carattere e' una vocale\n");
        }
        break;

      case 'i':    // if(carattere == 'i')
        {
          printf("il carattere e' una vocale\n");
        }
        break;

      case 'o':     // if(carattere == 'o')
        {
          printf("il carattere e' una vocale\n");
        }
        break;

      case 'u':
        {
          printf("il carattere e' una vocale\n");
        }
        break;

      default: 
        {
          printf("il carattere NON è una vocale\n");
        }
        break;
    }
}

char converti_MAIUSCOLO(char carattere) 
{
  char carattere_MAIUSCOLO;

  if(carattere < 97 || carattere > 122)
  {
    printf("ATTENZIONE: non hai inserito un carattere minuscolo!\n");
    return carattere;
  }
  
  carattere_MAIUSCOLO = carattere - 32;
  printf("minuscolo: %c | MAIUSCOLO: %c\n", carattere, carattere_MAIUSCOLO);
  
  return carattere_MAIUSCOLO;
}

char converti_minuscolo(char carattere)
{
  char carattere_minuscolo;

  if(carattere < 65 || carattere > 90)
  {
    printf("ATTENZIONE: non hai inserito un carattere MAIUSCOLO!\n");
    return carattere;
  }

  carattere_minuscolo = carattere + 32;
  printf("MAIUSCOLO %c | minuscolo %c\n", carattere, carattere_minuscolo);

  return carattere_minuscolo;
}

char shifta_carattere(int offset, char carattere)
{
  char nuovo_carattere;

  nuovo_carattere = carattere+offset;

  return nuovo_carattere;
}