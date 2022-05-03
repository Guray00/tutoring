#include <stdio.h>
#include <stdlib.h>

struct s_vag {
        int merce;
        struct s_vag *gancio;
};

typedef struct s_vag vagone;
void descrizione() {

        system("cls");
        printf("******* Programma di gestione dei binari *******\n\n\n");
        printf(" 0) Esci\n");
        printf(" 1) Stampa contenuto\n");
        printf(" 2) Muovi la Motrice sul binario\n");
        printf(" 3) Aggiungi vagone in coda\n");
        printf(" 4) Aggiungi vagone in testa\n");
        printf(" 5) Elimina vagone in testa\n");
        printf(" 6) Elimina vagone in coda\n");
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
                printf("ATTENZIONE!\n Il treno non e' ancora sul binario.\n");
        }
        else
        {
                printf("\nLa motrice non trasporta niente\n");
                p = p->gancio;
        }
        while (p != NULL)
        {
                printf("Il vagone %d ha un carico di %d kg\n", i++, p->merce);
                p = p->gancio;
        }
        printf("\n\n");
}
int main()
{
        system("COLOR 0A");
        vagone* motrice = NULL;
        int scelta=7;
       
        do {
                switch (scelta)
                {
                case 1:
                        vediContenuto(motrice);
                        system("pause");
                        break;
                case 2:
                        motrice = (vagone*)malloc(sizeof(vagone));
                        motrice->merce = 0;
                        motrice->gancio = NULL;
                        printf("\nHo trasferito la motrice sul binario\n\n\n");
                       
                        system("pause");
                        break;

                case 3:
                        aggiungiVagoneInCoda(motrice);
                        system("pause");
                        break;
                case 4:
                        aggiungiVagoneInTesta(motrice);
                        system("pause");
                        break;
                case 5:
                        eliminaVagoneInTesta(motrice);
                        system("pause");
                        break;
                case 6:
                        eliminaVagoneInCoda(motrice);
                        system("pause");
                        break;

                }
                if (scelta != 0) {
                        descrizione();
                        scanf_s("%d", &scelta);
                }
        } while (scelta != 0);
        system("CLS");
        printf("\n\n\nGRAZIE per aver usato il nostro programma\n\n");
        system("COLOR");
}