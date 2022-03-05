#include <stdio.h>
#include <stdlib.h>

struct s_vag {
        int merce;
        struct s_vag *gancio;
};

typedef struct s_vag vagone;

void descrizione() {
        //system("cls");
        printf("******* Programma di gestione dei binari *******\n\n\n");
        printf(" 0) Esci\n");
        printf(" 1) Stampa contenuto\n");
        printf(" 2) Muovi la Motrice sul binario\n");
        printf(" 3) Aggiungi vagone in coda\n");
        printf(" 4) Aggiungi vagone in testa\n");
        printf(" 5) Elimina vagone in testa\n");
        printf(" 6) Elimina vagone in coda\n");
        printf(" 7) Scorrimento a sinista\n");
        printf(" 8) Scorrimento a desta\n");
        printf(" 9) Rotazione a sinista\n");
        printf(" 10) Rotazione a destra\n");
  
        printf("\nFai la tua scelta -> ");
}
void aggiungiVagoneInCoda(vagone *p)
{
        if (p != NULL) {


                while (p->gancio != NULL) {
                        p = p->gancio;
                }
          
                p->gancio = (vagone*)malloc(sizeof(vagone));
                p = p->gancio;
                printf("\nQuanti kg di merce vuoi caricare sul vagone -> ");
                scanf("%d", &(p->merce));
                p->gancio = NULL;
        }
        else
        {
                printf("ATTENZIONE! Non e' presente la motrice sul binario");
        }
        printf("\n\n");
}
void eliminaVagoneInCoda(vagone* p) {
       
        if (p != NULL)
        {
               
                if (p->gancio != NULL) {
                        while( (p->gancio)->gancio != NULL) {
                                p = p->gancio;
                        }
                        printf("\nHo scaricato %dkg di merce sulla banchina e spostato il vagone nel binario morto\n\n", (p->gancio)->merce);
                        delete p->gancio;
                        p->gancio = NULL;
                }
                else
                {
                        printf("Non sono presenti vagoni attaccati alla motrice\n");

                }
                       
        }
        else
        {
                printf("Il treno non e' presente\n");
        }

}
void eliminaVagoneInTesta(vagone *p)
{
        vagone* pt;
        if(p!=NULL)
        {
                pt = p->gancio;
                if (pt != NULL)
                {
                        p->gancio = pt->gancio;
                        printf("\nHo scaricato %dkg di merce sulla banchina e spostato il vagone nel binario morto\n\n", pt->merce);
                        delete pt;
                        return;
                }
                else
                {
                        printf("Non sono presenti vagoni attaccati alla motrice\n");
                }
        }
        else
        {
                printf("Il treno non e' presente\n");
        }
       
}
void aggiungiVagoneInTesta(vagone *p) {
        vagone *pt;
        if (p != NULL) {
                pt = p->gancio;
               
                p->gancio = (vagone*)malloc(sizeof(vagone));
                p = p->gancio;
                printf("\nQuanti kg di merce vuoi caricare sul vagone -> ");
                scanf("%d", &(p->merce));
                p->gancio = pt;

        }
        else
        {
                printf("ATTENZIONE! Non e' presente la motrice sul binario");
        }
        printf("\n\n");
}
 
void vediContenuto(vagone* p)
{
        int i = 1;
        printf("\nIl peso della merce trasportata dal treno e' cosi' distribuito:\n");
        if (p == NULL)
        {
          printf("ATTENZIONE!\n Il treno non e' ancora sul binario\n");
        }
        
        else
        {
            printf("\nLa motrice non trasporta niente\n");
            p = p->gancio;
        }
  
        while (p != NULL){
          printf("Il vagone %d ha un carico di %d kg\n", i++, p->merce);
          p = p->gancio;
        }
  
        printf("\n\n");
}  

void scorrimentoSinistra(vagone* p){
  /*
    -> elimino il primo vagone
    -> la motrice non è più il primo vagone, ma il "secondo"

  __________         ___________
  |        |  -----  |          |
  __________         ___________
*/
  
  // se ho almeno un vagone
  if (p!= NULL){
    // in p abbiamo la motrice, ma non deve essere cancellata
    vagone* elimina = p->gancio;
  
    // alla motrice devo collegare il secondo vagone
    vagone* secondo = elimina->gancio;
    p->gancio = secondo; // il nuovo secondo
  
    // elimino il vecchio vagone 1
    delete elimina;
  }

  else {
    printf("Non abbiamo vagoni!");
  }

}

void rotazioneSinistra(vagone* p){
  // in p abbiamo la motrice

  if(p!=NULL){
    // quello che vogliamo mettere in fondo è p->gancio (il primo)
    vagone* spostare = p->gancio;

    /*
    motrice   p 
    vagone2   spostare->gancio
    vagone3   AUX
    vagone1   spostare,  aux->gancio
    NULL
    */
    
    // lo vogliamo spostare in fondo, scorro tutto il treno fino a trovare
    // l'ultimo vagone
    vagone* aux = p;
    while(aux->gancio != NULL){
      // scorro aux mettendoci il successivo fino a quando ho vagoni
      aux = aux->gancio;
    }
  
    // quando sono qua aux->gancio = NULL => è l'ultimo!
    aux->gancio = spostare;
  
    // dico che dopo la motrice c'è il secondo elemento
    p->gancio = spostare->gancio;
  
    // ormai spostare è in fondo, quindi quello che viene dopo è null
    spostare->gancio = NULL;
  }

  else {
     printf("Non ci sono vagoni!"); 
  }
  
}

void rotazioneDestra(vagone* p){

  // p è la motrice

  vagone* aux = p;
  vagone* penultimo = NULL;
  
  // fino a quando non ho trovato l'ultimo, scorri
  while(aux->gancio != NULL){
    penultimo = aux; // penultimo rimane sempre un giro indietro, quindi effettivamente
                     // sarà uno prima dell'ultimo => penultimo

    // aggiorno aux
    aux = aux->gancio;
  }
  // dobbiamo dire al penultimo che adesso è l'ultimo, quindi quello 
  // che segue punterà a null
  penultimo->gancio = NULL;
  
  // su aux abbiamo l'ultimo vagone
  aux->gancio = p->gancio;

  // dobbiamo dire alla motrice di puntare al nuovo primo
  p->gancio = aux;
  
}


int main()
{
        //system("COLOR 0A");
        vagone* motrice = NULL;
        int scelta;
       
        do {

                if (scelta != 0) {
                        descrizione();
                        scanf("%d", &scelta);
                }
          
                switch (scelta)
                {
                case 1:
                        vediContenuto(motrice);
                        //system("pause");
                        break;
                case 2:
                        motrice = (vagone*)malloc(sizeof(vagone));
                        motrice->merce = 0;
                        motrice->gancio = NULL;
                        printf("\nHo trasferito la motrice sul binario\n\n\n");
                       
                        //system("pause");
                        break;

                case 3:
                        aggiungiVagoneInCoda(motrice);
                        //system("pause");
                        break;
                case 4:
                        aggiungiVagoneInTesta(motrice);
                        //system("pause");
                        break;
                case 5:
                        eliminaVagoneInTesta(motrice);
                        //system("pause");
                        break;
                case 6:
                        eliminaVagoneInCoda(motrice);
                        //system("pause");
                        break;

                 case 7:
                        scorrimentoSinistra(motrice);
                        //system("pause");
                        break;

                case  8:
                        // NON ESISTE, SCORRIMENTO DESTRA

                        /*
                          -> spostiamo i vagoni verso destra:
                              vagone1 -> vagone2
                              vagone2 -> vagone3
                              vagone3 -> null (eliminato)
                        */

                        // sarebbe come fare questo ma senza la scanf, ci deve 
                        // mettere da solo 0!
                        aggiungiVagoneInTesta(motrice);
                        eliminaVagoneInCoda(motrice);
                        break;

                case 9:
                        rotazioneSinistra(motrice);
                        break;

                  case 10:
                        rotazioneDestra(motrice);
                        break;

                }
                
        } while (scelta != 0);
        //system("CLS");
        printf("\n\n\nGRAZIE per aver usato il nostro programma\n\n");
        //system("COLOR");
}


