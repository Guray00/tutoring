#include <stdio.h>
#include <stdlib.h>
#define n 5

// utility to print an array
void printArray(int* v, int n){
	cout<<"[ ";
	for (int i = 0; i < n; i++)
		cout<<v[i]<<" ";
	cout<<"]\n";
}

int ricercaBinaria(int V[],int inf,int sup,int x) // dentro le parentesi ci sono le variabili che passeranno dentro la funzione
{
      if(inf>sup)
      {
		return -1;
   		}
    int mid=(inf+sup)/2; //verrà presa sempre la parte intera perchè faccio divisione tra interi
    if(V[mid]==x)
    {
		return mid; // caso fortunato
		}
    else
    {
        if(V[mid]>x) // restringo il campo
        {
			return ricercaBinaria(V,inf,mid-1,x);
			}
        else
        {
			return ricercaBinaria(V,mid+1,sup,x);
			}
	}
    
}

main()
{
	int n;
    int V[10]={1,2,3,4,6,7,8,9,10,11};
    printf("dammi il valore da cercare ");
    scanf("%d",&n);
    int pos=ricercaBinaria(V,0,9,n);// dentro le parentesi tonde passa il vettore, la prima cella, l'ultima e l'intero che voglio cercare
    if(pos==-1)
    {
		printf("l'elemento non e' presente");
		}
    else
    {
		printf("l'elemento e' presente in posizione %d",pos);
		}
}