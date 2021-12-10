#include <stdio.h>
#include <stdlib.h>

#define n 10


// funzione per mostrare a schermo un array
void printArray(int* V, int f){
	printf("[");
	for (int i = 0; i < f; i++)
		printf(" %d", V[i]);
	printf(" ]\n");
}

void merge ( int V[n], int inf, int mid, int sup)
{
  int i, j, k, Vappoggio[n];
    i = inf;
    j = mid + 1;
    k = inf;



  while (i <= mid && j <= sup)
  {
        if (V[i] < V[j])
        {
            Vappoggio[k] = V[i];
            i=i+1;
            
        }
        else
        {
            Vappoggio[k] = V[j];
            j=j+1;
            
        }
        k=k+1;
  }

  while (i <= mid)
    {
        Vappoggio[k] = V[i];
        i=i+1;
        k=k+1;
    }
  
  while (j <= sup)
  {
    Vappoggio[k]=V[j];
    j=j+1;
    k=k+1;
  }
  
  for (i=inf; i<=mid; i++)
  {
    V[i]=Vappoggio[i];
  }

  for (j=mid+1; j<=sup; j++)
  {
    V[j]=Vappoggio[j];
  }


}



void mergeSort (int V[n], int inf, int sup)
{
  int mid;
  if (inf<sup)
  {
    mid=(inf+sup)/2;
    mergeSort(V, inf , mid);
    mergeSort(V, mid+1, sup);
    merge( V,inf,mid,sup);
  }

}

int Ricercadicotomica ( int V[n], int inf, int sup, int valore )
{
  if ( inf > sup )
  {
    return -1; 
  }


  int mid;
  mid=(inf+sup)/2;
  
  if ( V[mid]==valore)
  {
    return mid;
  }
  else 
  {
    if ( V[mid]>valore)
    {
      return Ricercadicotomica (V, inf, mid-1, valore);
    }
    else 
    {
      return Ricercadicotomica (V, mid+1, sup, valore);
    }
  }
}



int main()
{
  int V[n]={3,7,4,1,2,8,5,9,14,13};
  mergeSort(V, 0, n-1);


  int x;

  scanf("%d", &x);
  int pos = Ricercadicotomica(V, 0, n-1, x);
  
  printArray(V, n);
  printf("%d", pos);
}