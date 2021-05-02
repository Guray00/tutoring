//Scrivere un programma in grado di chiedere n numeri interi all'utente e visualizzarli nell'ordine in cui sono stati inseriti.

#include <stdio.h>

int main(){
	int v[10000],n;
	int somma = 0;
	
	do{
		printf("Inserisci n: ");
		scanf("%d",&n);
	}while(n>10000);
	
	for(int i=0;i<n;i++)
	{
		printf("Inserisci elemento %d: ",i);
		scanf("%d",&v[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",v[i]);
	}
	
	//visualizzare la somma degli elementi dispari
	
	for(int i=0;i<n;i++)
	{
		if(v[i]%2!=0)
			somma=somma+v[i];
	}
	printf("\n\nLa somma degli elementi dispari e': %d", somma);
	
	//visualizzare la somma degli elementi in posizione dispari
	
	somma=0;
	
	for(int i=0;i<n;i++)
	{
		if(i%2!=0)
			somma=somma+v[i];
	}
	printf("\n\nLa somma degli elementi in posizione dispari e': %d", somma);
	return 0;
}