#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 30
/*
Scrivi un programma che generi casualmente 30 numeri di valore tra 0 e 70 e li memorizzi in un vettore.

1.1) Dopo aver stampato l'array, trovare l'indice e il valore dell'elemento massimo fra gli elementi di posto dispari, e l'indice e il valore del minimo fra gli elementi di posto pari.

1.2) Dopo aver visualizzato il punto precedente, ordinare il vettore con l'ordinamento Merge sort.

1.3) Dopo averlo ordinato cercare un valore pari a x = 22 con la ricerca dicotomica ( potrebbe pure non esserci essendo un vettore casuale, quindi se non presente nell'array bisogna stampare ad esempio elemento non trovato).

1.4) Alla fine visualizza l'array precedente in un nuovo array in modo tale che, scegliendo un indice a piacere, il primo elemento dell'array sia quello specificato dall'indice, il secondo sia quello precedente e così fino al primo, poi proseguendo dall'ultimo retrocedendo fino a completare l'array.

Esempio se N = 5
=> Array: 2,7,9,13,22,25.
=> Scelgo x = 2
=> Array: 9,7,2,25,22,13.
*/

void stampaVettore(int vettore[n], int i )
{
    for (i = 0; i < n; i++)
    {
        printf("%d ", vettore[i]);
    }
    printf("\n");
}

void merge(int vettore[n], int mid, int inf, int sup)
{
    int i, j, k, appvett[n];
    i = inf;
    j = mid + 1;
    k = inf;
	
	// fin quando ho elementi da entrambe le parti
    while (i <= mid && j <= sup)
    {
        if (vettore[i] < vettore[j])
        {
            appvett[k] = vettore[i];
            i=i+1;
            
        }
        else
        {
            appvett[k] = vettore[j];
            j=j+1;
            
        }
        k=k+1;
    }
    
    //copia gli elementi rimanenti di i
   while (i <= mid)
    {
        appvett[k] = vettore[i];
        i=i+1;
        k=k+1;
    }
    
    //copia gli elementi rimanenti di j
    while (j <= sup)
    {
        appvett[k] = vettore[j];
        j=j+1;
        k=k+1;
        
    }
    
    //copia i dati negli array temporanei
    for (i = inf; i <= mid; i++) 
    {
        vettore[i] = appvett[i];
    }
    for (j = mid+1; j <= sup; j++) 
    {
        vettore[j] = appvett[j];
    }
    
}

void mergeSort(int vettore[n], int inf, int sup){
    int mid; 
    if(inf<sup){
        mid = (inf + sup) / 2;
        mergeSort(vettore, inf, mid);
        mergeSort(vettore, mid+1, sup);
        merge(vettore, mid, inf, sup);
    }
}

int RicercaDicotomica (int V[30], int inf, int sup, int x )
{

  // non siamo riusciti a trovarlo  
  if ( inf > sup )
  {
    printf("Elemento non trovato %d", x);
    return -1;
  }
  

  // inferiore è più piccolo del superiore, quindi devo continuare a cercare
  int mid;
  mid = (inf + sup)/2;
  if (x==V[mid])
  {
    return mid;
  }
  else
  {
    if (x < V[mid])
    {
      return RicercaDicotomica( V, inf, mid-1, x);
    }
    else 
    {
      return RicercaDicotomica ( V, mid+1, sup, x);
    }
  }
}


// ==============================================================
int main()
{
  int i,V[30];
  

  // creiamo 30 elementi casuali
  srand(time(0));
  for (i=0; i<30; i++)
  {
    V[i]=0+rand()%71;
  }

  // stampo il vettore
  for (i=0; i<30; i++)
  {
    printf("%d ", V[i]);
  }

  // cerchiamo valore e pos max dei dispari
  int max, indice_max;
  max=V[1];
  indice_max=1;
  
  for (i=1; i<30; i=i+2)
  {
    if (V[i]>max)
    {
      max=V[i];
      indice_max=i;
    } 
  }
  printf("\n[MAX] valore %d in posizione %d", max, indice_max);

  // cerchiamo valore e pos minimo
  int min, indice_min;
  min=V[0];
  indice_min=0;
  for (i=0; i<30; i=i+2)
  {
    if (V[i]<min)
    {
      min=V[i];
      indice_min=i;
    }
  }
	printf("\n[MIN] valore %d in posizione %d\n", min, indice_min);
  mergeSort(V, 0, 29);  
  stampaVettore(V, 30);

  int a = RicercaDicotomica(V, 0, 29, 22);
	printf("\nPosizione di 22: %d", a);


  /*
  => Array: 2,7,9,13,22,25 <=> V
  => Scelgo x = 2
  => Array: 9,7,2,25,22,13 <=> Vappoggio
  */
  int pos;
  printf("\nInserisci una posizione: ");
  scanf("%d", &pos);
  
  int Vappoggio[30];
  for (i=0; i<=pos; i++)
  {
    /*
    Vappoggio[0]= V[pos-0];
    Vappoggio[1]= V[pos-1];
    Vappoggio[2]= V[pos-2];
    */
    Vappoggio[i]= V[pos-j];
  }

  int j = 1;
  for (i=29; i>pos; i--)
  {
    Vappoggio[i]=V[pos+j];
    j++;
  }

  stampaVettore(Vappoggio, 30);
  

	return 0;
}