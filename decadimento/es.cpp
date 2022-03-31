#include <iostream>
using namespace std;


float massaresidua(float mi, float costd, int anni){
  for(int i=0; i<anni; i++){
    mi=mi-costd;
  }

  // per fare in modo che non venga
  // una massa negativa
  if(mi<0){
    mi=0;
  }
  
  return mi;
}

int anniNecessari(float mi, float costd){
  int i=0;
  while(mi>1){
    mi=mi-costd;
    i++;
  }

  return i;
}

int main(){
  float mi,costd,a;
  int anni, b;
  
  cout<< "Inserire la massa iniziale: "<<endl;
	cin>>mi;
  
  cout<< "Inserire il decadimento: "<<endl;
  cin>>costd;

  cout<< "Inserire il numero di anni: "<<endl;
  cin>>anni;

  a = massaresidua(mi, costd, anni);

  cout<<"La massa residua e' di "<<a<<" grammi\n";

  b = anniNecessari(mi, costd);
  cout<<"Gli anni necessari sono "<<b<<"\n";
  
	return 0;

}