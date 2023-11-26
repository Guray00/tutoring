#include <iostream>
#include <ctime>
using namespace std;

int main(){
  int n;
  srand(time(NULL));
  int pari = 0;
  int dispari = 0;

  do{
    cout<< "quanti numeri vuoi generare? ";
    cin>> n;
  }while(n <= 0);

  for(int i=0; i < n; i++){
    int casuale = rand()%1000 + 1;
    cout<< "Estratto: "<<casuale<<endl;

    if(casuale % 2 == 0){
      pari++;
    } else {
      dispari++;
    }
    
  }

  cout << endl;
  cout << "Sono usciti " << pari << " numeri pari" <<endl;
  cout << "Sono usciti " << dispari << " numeri dispari"<<endl;
  
  return 0;
}