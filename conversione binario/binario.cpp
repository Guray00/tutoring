#include <iostream>
using namespace std;

int DIMENSIONE = 8;


// funzione che ti fa il complemento a 1
void complemento1(int v[]){
  // per ogni cella del vettore
  for(int i = 0; i < DIMENSIONE; i++){
    // se è zero
    if(v[i] == 0){
      // diventa 1
      v[i] = 1;
    } else{
      // diventa 0
      v[i] = 0;
    }
  }
}

// prende in ingresso
void trasformaBinario(int n, int v[]){

  bool negativo;

  if(n < 0){
    negativo = true;
    n = n*(-1);
  } else{
    negativo = false;
  }

  // contatore per sapere dove mettere il numero = 7
  int cont = 7;

  // per ogni cella del vettore
  for(int i=0;i<DIMENSIONE;i++ ){
    // la pongo a zero
    v[i]=0;
  }

  // finchè n non diventa 0
  while(n!=0){
    // salvo nel array il resto che mi da
   v[cont] = n % 2;
    
    // divido il numero per 2
    n = n / 2;

    // decremento il contatore
    cont--;
  }

  // se il numero è negativo
  if(negativo){
    // complemento a 2
    complemento1(v);

    cont = DIMENSIONE-1;
    v[cont]++;

    // ti porti indietro i riporti
    while(v[cont] > 1 && cont >= 0){
      v[cont] = 0;
      v[cont-1]++;
      cont--;
    }
  }
}


void stampavettore(int v[]){
  for(int i = 0; i < DIMENSIONE; i++){
    cout << v[i]<<" ";
  }
  cout << endl;
}

int main(){
  int n;
  int resti[DIMENSIONE];

  // numero preso in ingresso
  do{
    cout<<"inserisci un numero: "<<endl;
    cin>>n;
  } while(n<-128 || n>127);

  trasformaBinario(n, resti);

  stampavettore(resti);
  
	return 0;
}