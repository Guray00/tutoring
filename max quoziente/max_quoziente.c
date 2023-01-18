# include <stdio.h>
# define maxn 20

int main (){
  
	int n, v[maxn], s=0, i;
  float m=0, q;
  int max;
  
	do{
		printf("quanti numeri saranno inseriti? ");
		scanf("%d", &n);

    if (n>maxn || n<=0){
      printf("Hai sbagliato!");
    }
    
	}	while (n>maxn || n<=0);
		
	// inseriamo i valori
	for(i=0; i<n; i++){
		printf ("inserisci un numero: ");
		scanf ("%d", &v[i]);

    // se è il primo numero che inserisco, allora max = numero
    if(i == 0){
      max = v[0]; // i=0
    }
    // se ho trovato un numero maggiore del massimo
    else if (v[i] > max){
      // aggiorno il massimo
      max = v[i];
    }
    
    // calcolo direttamente la somma
	  s=s+v[i];
	}
	
  m = (float) s / n;
  q = (float) m / max;
  
  printf("Il massimo quoziente vale %f", q);
}