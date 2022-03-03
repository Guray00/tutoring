#include <stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>

	float f(float x){
		float y;

		y=3*x*x+2*x+1; //funzione di cui vogliamo calcolare l'integrale

		return y;
	}

	int main(){
		
		int dentro,i,N;
		float x,y,Int,n,a,b,MAX;
		printf("inserisci inferiore: ");
		scanf("%f",&a);
    
		printf("inserisci superiore: ");
		scanf("%f",&b);
    
		MAX=f(b);
    
		printf("inserisci quante iterazioni: ");
		scanf("%d",&N);   
    //numero dei punti che vogliamo generare

    //genera il numero casuale tra 0 e 216-1
		srand(time(NULL));                           

	//iniziamo adesso a generare questi numeri ed assegniamoli ad xi e a yi

	  for(i=0;i<N;i++){
	    n=rand();
	    x=a+((float)n/RAND_MAX)*(b-a);      //calcola il numero generato tra 0 e RAND_MAX;
                                                         

                                                          

                                                              //stessa cosa per l'ordinata yi

	n=rand();
	y=((float)n/RAND_MAX)*MAX;

	if(y<=f(x)){                               //stiamo controllando se il numero estratto sta sotto la funzione che vogliamo

                                               

	dentro++;                          //cioè incrementa i punti che stanno sotto la curva
	}
      
}

	Int=(b-a)*MAX*float(dentro)/float(N);             //questo perché  nel nostro esempio

                                                                          //(B-A)=4  e MAX=f(5)=86

                                                                          //nota: se cambiamo gli estremi di integrazione

                                                                          //cambierà sia (B-A) che il valore MAX

	//adesso abbiamo calcolato l'integrale e dobbiamo solo stamparlo

	printf("\nL'area dell'integrale calcolato con il metodo Monte Carlo\n");

	printf("    I=%.8f\n",Int);

	printf("  Numeri dentro=%d\n",dentro);

	printf("Numeri generati=%d\n",N);

	return 0;

}