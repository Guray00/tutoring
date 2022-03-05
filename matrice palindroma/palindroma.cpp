#include <iostream>
using namespace std;


// creare effettivamente la matrice
char** crea (char **v, int r, int c){

  // per ogni cella del vettore grande
  // (quindi della matrice) vogliamo 
  // inizializzare il "vettore" piccolo
  
  // [  [ -, -]   [-, -]  [-, -]   ]
  for (int i = 0; i < r; i++){
    v[i] = new char[c];
  }

  return v;
} 


char** popola (char** v, int r, int c){

  // chiedere all'utente, per ogni cella
  // disponibile nella matrice, di inserire
  // il carattere voluto

  for (int i = 0; i<r; i++){
    for (int j=0; j<c; j++){
      cout<<"Inserisci un carattere"<<endl;
      cin>>v[i][j];
    }
  }

  return v;
}

void stampa(char **v, int r, int c){
  for(int i=0; i<r; i++){

    for(int j=0; j<c; j++){
      cout<<v[i][j]<<" ";
    }

    cout<<endl;
  }
}

// anna
bool controllo(char**v, int r, int c){

  // guardiamo la prima cella e la confrontiamo con l'ultima
  // guardiamo la seconda cella e la confrontiamo con la penultima
  // .....
  // fino alla fine
  
  /*
    abbiamo un indice i che scorre tutta la riga


    0 1 2 3
    a n n a  

    confrontiamo tante volte quante il numero di colonne (c) se:
      > l'elemnto alla colonna i della riga r == elemento della riga r alla colonna c-i

    v[r][i] == v[r][c-i-1]
  */

  bool palindroma = true;
  
  for(int i=0; i<(c/2); i++){

    // cout<<"v[r][i] vale: "<<v[r][i]<<" mentre v[r][c-i-1] vale "<<v[r][c-i-1]<<endl;
    
    if(v[r][i] != v[r][c-i-1]){
      // entriamo qua quando non è palindroma
      palindroma = false;
    }
  }

  return palindroma;  
}


int main(){
  int r,c;

  do {
    cout<<"inserire numero di righe"<<endl;
    cin>>r;
  } while(r < 2);

  // voglio controllare che sia maggiore o uguale a 2
  do {
    cout<<"inserire numero di colonne valido (>= 2)"<<endl;
    cin>>c;
  } while(c < 2); 
  
  // creiamo una matrice facendo "finta" che sia
  // un vettore. Per questo in ogni cella ci sono
  // puntatori a carattere
  
  char **v= new char*[r];
  v = crea(v, r, c);
  v = popola(v, r, c);
  stampa(v,r,c);

  int riga_da_controllare;

  do{
    cout << "Quale riga vuoi controllare"<<endl;
    cin  >> riga_da_controllare;
  } while(riga_da_controllare >= r || riga_da_controllare < 0);
  
  bool palindroma = controllo(v,riga_da_controllare,c);

  if (palindroma) {
    cout<<"La riga selezionata è palindroma"<<endl;
  }

  else {
    cout<<"La riga selezionata non è palindroma"<<endl;
  }
  
  return 0;
}