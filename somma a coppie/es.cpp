#include <iostream>
#include <ctime>
using namespace std;

int main(){
  srand(time(NULL));
  
  int n = 20; // dimensione di v1
  int v1[n];
  int x = 10; // dimensione di v2
  int v2[x];
  int max = 0;

  // generazione degli elementi casuali in v1
  cout<<endl<<"v1: [ ";
  for(int i = 0; i < n; i++){
    v1[i] = rand() % 1000;
    cout<< v1[i]<<"\t";
  }
  cout<<"]"<<endl;

  /*
  i = 0   => 0 e 1
  i = 1   => 2 e 3
  i=  2   => 4 e 5

  i=0     i*2 => . (i*2)+1 => .
  */

  cout<<"v2: [ ";
  for(int i = 0; i < x; i++){
    v2[i] = v1[i*2] + v1[(i*2)+1];
    cout << v2[i]<<"\t";
  }
  cout << "]"<<endl;

  // cerchiamo il valore massimo
  for(int i = 0; i < x; i++){
    // 2 5 10 1 3 4 6 7 8 9
    // max: 5

    // il numero che guardo è maggiore del massimo precedente?
    if(max < v2[i]){
      // aggiorno il valore del massimo
      max = v2[i];
    }
  }

  cout << "Il massimo di v2 vale "<< max<<endl;
	
  return 0;
}