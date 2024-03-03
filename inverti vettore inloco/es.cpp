
#include <iostream>
#include <time.h>
using namespace std;


// funzione che inverte gli elementi
void inverti(int V[], int dim){
  int l = 0;
  int r = dim-1;

  // fino a quando l < r
  while(l < r){
  
    // prendo nella casella r ed l e le inverto
    int tmp = V[l];
    V[l] = V[r];
    V[r] = tmp;

    l = l + 1;
    r = r - 1;
  }
}

// funzione che riempi il vettore di valore
void riempiRandom(int V[], int dim){
  for ( int i=0; i<dim; i++){
    V[i]= rand()%10+1;
  }
}

// funzione che stampa un vettore
void stampaVettore(int V[], int dim){
  cout<<" Array: ";
  
  for(int i= 0; i<dim; i++){
    cout<< V[i]<<" ";
  }
  
  cout << endl;
}

int main(){
  int dim;
  int V[100];
  
  srand(time(NULL));
  
  do{
    cout<<" Inserisci dimensione array: ";
    cin>> dim; 
  }while(dim<=0 || dim>100);

  riempiRandom(V,dim);
  stampaVettore (V,dim);
  inverti(V,dim);
  stampaVettore (V,dim);
  
  return 0;
}