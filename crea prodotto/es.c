/*
Costruire un record Prodotto con:
- nome
- marca
- prezzo unitario
- data scadenza
- quantità in magazzino

Fare l'input e l'output di un prodotto, stampare poi il valore totale del prodotto accantonato in magazzino.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// definiamo il valore massimo di caratteri in una stringa
#define size 20

// creazione della struttura per l'inserimento della data
struct data{
    int giorno;
    int mese;
    int anno;
};

// creazione della struttura per il prodotto
struct prodotto{
  char nome[size];
  char marca[size];
  float prezzo_unitario;
  struct data scadenza;
  int quantita;
};


int main(){

  // creaimo una variabile per salvare 
  // le informazioni del prodotto
  struct prodotto pippo;

  // chiediamo di inserire il nome
  printf("Inserire il nome del prodotto: ");
  scanf("%s", pippo.nome);

  // chiediamo di inserire la marca
  printf("Inserire la marca del prodotto: ");
  scanf("%s", pippo.marca);

  // chiediamo di inserire il prezzo unitario
  printf("Inserire il prezzo unitario: ");
  scanf("%f", &pippo.prezzo_unitario);

  // chiediamo la scadenza del prodotto
  printf("Inserire il giorno di scadenza: ");
  scanf("%d", &pippo.scadenza.giorno);

  printf("Inserire il mese di scadenza: ");
  scanf("%d", &pippo.scadenza.mese);
  
  printf("Inserire l'anno di scadenza: ");
  scanf("%d", &pippo.scadenza.anno);

  // inseriamo la quantità dei prodotti
  printf("Inserire la quantità di prodotto: ");
  scanf("%d", &pippo.quantita);

  /*
  Il prodotto "%s" ha le seguenti caratteristiche:
  - nome: ...
  - marca: ...
  ...
  */

  printf("Il prodotto %s ha le seguenti caratteristiche: \n", pippo.nome);
  printf("- nome: %s\n", pippo.nome);
  printf("- marca: %s\n", pippo.marca);
  printf("- prezzo unitario: %f\n",pippo.prezzo_unitario);
  printf("- scadenza: %d-%d-%d\n", pippo.scadenza.anno, pippo.scadenza.mese, pippo.scadenza.giorno);
  printf("- quantita': %d\n", pippo.quantita);

  float valore_totale;
  valore_totale = pippo.prezzo_unitario* pippo.quantita;

  printf("Il valore totale e' di %.2f euro", valore_totale);
  
  return 0;
}