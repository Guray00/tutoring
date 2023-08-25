#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<time.h>

// funzione che chiede a schermo di inserire il numero di piloti
int input_piloti();

// restiture un tempo casuale che sia sempre maggiore di 3600
int tempo_casuale();

// restituisce il massimo
int massimo(int, int);

int minimo(int, int);

// funzione che mostra a schermo il primo classificato e l'ultimo
void stampa_risultati(int, int);


int main(){

  int i, piloti, tempo, max, min;

  // serve a genereare numeri casuali
  srand(time(NULL));
  max = 0;

  // per 10 macchine chiedere il numero di piloti
  for(i = 0; i < 10; i++){
    int j;

    // ogni volta che entro è una nuova macchina
    tempo = 0;
    

    // in realtà non la useremo...
    piloti = input_piloti();

    // generare i tempi per l'auto corrente
    for(j=0; j < 60; j++){
      tempo = tempo + tempo_casuale();
    }

    // se è la prima volta che parte la macchina, la metto 
    // come riferimento come minimo
    if(i == 0){
      min = tempo;
    }

    // stampiamo a schermo i tempi
    printf("=> %d\n", tempo);

    // ho il tempo totale per la macchina attuale, verifico se ha vinto o perso
    max = massimo(max, tempo);
    min = minimo(min, tempo);
  }

  // qua ho già calcolato tutti il massimo e il minimo
  stampa_risultati(max, min);
  
  return 0;
}

// il numero di piloti deve essere compreso tra 1 e 3
int input_piloti(){
  int n;

  do {
    printf("Quanti piloti ha la macchina? ");
    scanf("%d", &n);  

    // se l'utente ha sbagliato
    if(n < 1 || n>3){
     printf("Hai sbagliato! Devi inserire un numero 1 da a 3.\n\n"); 
    }
  } while(n < 1 || n>3);

  return n;
}

int tempo_casuale(){

  // deve generare un tempo casuale per il giro
  int tempo; 

  tempo = rand()%5000 + 3600;

  return tempo;
}

int massimo(int max, int n){

  if(max > n){
    return max;
  }

  else {
    return n;
  }
  
}

int minimo(int min, int n){

  if(min < n){
    return min;
  }

  else {
    return n;
  }
  
}

void stampa_risultati(int primo, int ultimo){
  printf("Primo arrivato: %d\n", primo);
  printf("Ultimo arrivato: %d", ultimo);
}