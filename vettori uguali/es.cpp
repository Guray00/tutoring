#include <iostream>
#include<time.h>

using namespace std;

void riempiArray(int array[], int dim){
   for(int i=0; i<dim; i++){
    array[i]=rand()%100+1;
  }
}

void stampavettore(int array[], int dim){
  for(int i=0; i<dim; i++){
    cout << array[i]<<" ";
  }
  
  cout<<endl;
}

bool compara(int v1[], int v2[], int n, int m){
  // controllo se la dimensione è uguale
  if (n != m){
    return false;
  }

  // se è uguale continuo...
  // per ogni elemento di v1 controllo se è uguale a v2
  for(int i = 0; i<n; i++){
    if(v1[i] != v2[i]){
      return false;
    } 
  }

  // se arrivo qua sono uguali
  return true;
}


int main(){
  int n, m;
  srand(time(NULL));
  
  do{
    cout << "Inserisci la dimensione del primo vettore: ";
    cin >> n;
  }while(n<0 || n>100);
  
  do{
   cout << "Inserisci la dimensione del secondo vettore: ";
    cin >> m;
  }while(m<0 || m > 100);

  int v1[n];
  int v2[m];
  
  // riempiere con valori casuali
  riempiArray(v1,n);
  riempiArray(v2,m);

  stampavettore(v1,n);
  stampavettore(v2,m);

  bool risultato = compara(v1,v2,n,m);
  if (risultato == true){
    cout << "sono uguali"<<endl;
  }
  else {
    cout << "sono diversi"<<endl;
  }

	return 0;
}