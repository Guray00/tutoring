#include <iostream>
using namespace std;

int main(){
  int v[20], n, x, v2[20];

  // chiediamo la dimensione
  do{
    cout << "Inserisci la dimensione del vettore: ";
    cin >> n;
    if(n <= 0 || n > 20){
      cout<<"Errore, inserisci una dimensione valida"<<endl<<endl;
    }
  } while(n <= 0 || n > 20);

  // faccio inserire la soglia X
  cout << "Inserire la soglia x: ";
  cin >> x;

  // per ogni cella del vettore (i indica la cella)
  for(int i = 0; i < n; i++){
    cout << "Inserisci il valore V["<<i<<"]: ";
    cin >> v[i];
  }
  

  // conta quanti elementi sono dentro v2 per sapere
  // in quale posizione posizionare il valore
  int m = 0;

  // copiare gli elementi di V dentro V2 se sono più piccoli di X
  for(int i = 0; i < n; i++){
    // se l'elemento di V che guardo < x
    if(v[i] < x){
      v2[m] = v[i]; // devo copiare v[i] dentro v2[n]
      m++;          // conto che ho messo un elemento
    }
  }

  cout <<endl<<"V:  ";
  for (int i = 0; i < n; i++){
    cout << v[i] << " ";
  }

  cout << endl<<"V2: ";
  for (int i = 0; i < m; i++){
    cout << v2[i] << " ";
  }

  
	return 0;
}