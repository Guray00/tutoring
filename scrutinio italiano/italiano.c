#include<stdio.h>
# define maxn 10

int main(){

  int n, suf[maxn], ins[maxn], i, s1=0, s2=0, tmp, cs=0, ci=0;
  float m1=0, m2=0;

  // controllo su quanti numeri
  do{
  	printf("quanti numeri saranno inseriti? ");
  	scanf("%d", &n);

    // avvertiamo l'utente che ha sbagliato
    if(n > maxn || n <= 0){
      printf("Hai sbagliato! ");
    }
    
  } while (n > maxn || n<=0);


  // chiedere dei numeri
  for(i = 0; i < n; i++){

    // per ogni numero controlliamo che sia compreso tra 1 e 10
    do {
      // inseriamo il numero
      printf("Inserisci il valore: ");
      scanf("%d", &tmp);

      // avvertiamo l'utente che ha sbagliato
      if (tmp < 1 || tmp > 10){
        printf("Hai sbagliato! ");
      }
      
    } while(tmp < 1 || tmp > 10);

    // tmp ha il valore corretto compreso tra 1 e 10
    
    // se è minore di 6
    if (tmp < 6){
      // inseriamo nei insufficienti
      ins[ci] = tmp;
      ci = ci + 1; // ci++
      s2 = s2 + tmp;
    }
      
    // altrimenti
    else {
      // inseriamo negli sufficienti
      suf[cs] = tmp;
      cs++;
      s1 = s1 + tmp;
    }
    
  }

  if (cs > 0)
    m1 = (float) s1 / cs;

  if (ci > 0)
  m2 = (float) s2 / ci;

  printf("\nmedia suf: %f\n", m1);
  printf("media insuf: %f", m2);
	return 0;
}