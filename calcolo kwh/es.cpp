#include <iostream>
using namespace std;

int main(){
  int consumo;
  float prezzo_totale;
  float prezzo_medio;

  cout << "Inserisci il tuo consumo: ";
  cin>>consumo;

  if(consumo < 500){
    prezzo_totale = consumo * 0.20; 
  }
    
  else if(consumo >= 500 && consumo < 1000){
    prezzo_totale = 0.20*500 + (consumo-500)*0.05;
  }
    
  else{
    prezzo_totale = 0.20*500 + 500*0.05 + (consumo - 1000)*0.08;
  }

  prezzo_medio = prezzo_totale / consumo;
  
  cout<<"Il prezzo della bolletta sarà di "<< prezzo_totale<<" euro"<<endl;
  cout<<"Il prezzo medio a kwh e' di " << prezzo_medio << " euro"<<endl;
  
  
	return 0;
}