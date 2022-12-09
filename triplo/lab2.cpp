#include <iostream>
using namespace std;


// funzione che triplica 
void triplo(int* m){
  *m = (*m) * 3;
}

int main(){

  int n; //4
  cout << "Inserisci un valore: ";
  cin >> n;

  triplo(&n);
  cout<<"Il triplo vale: "<<n<<endl;
	
  return 0;
}