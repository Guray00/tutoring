#include <stdio.h>

int main(){
  // n(int): numero inserito dall'utente;
  // sum (int): somma dei numeri divisori;
  // sum parte da zero per fare le somme
  int n, sum=0, i;
  printf("Inserisci un numero: ");
  scanf("%d", &n);
  
  // scorro i numeri da 2 a n per cercare i divosori:
  for(i=1; i<n; i++){
    
    // il numero che sto scorrendo, è un divisorre per n?
    if(n%i==0){
        // sum += divisore;
        sum+=i;
    }
  }
  
  // se il numero è perfetto:
  if(sum==n){
    // stampo: "Il numero e' perfetto"
    printf("Il numero inserito e' perfetto");
  }
  
  // altrimenti:
  else {
    // stampo: "Il numero non e' perfetto"
    printf("Il numero inserito non e' perfetto");
  }
  
	return 0;
}