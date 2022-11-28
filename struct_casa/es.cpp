#include <iostream>
using namespace std;

struct casa{
  int m_quadri;
  char classeenergetica;
  float costo;
};

int main(){
  casa casa1;
  casa casa2;
  casa casa3;

  cout<< "Inserire m quadri prima casa: ";
  cin>>casa1.m_quadri;

  cout<< "Inserire classe energetica prima casa: "; 
  cin>>casa1.classeenergetica;

  cout<< "Inserire costo prima casa: ";
  cin>>casa1.costo;
 
  cout<< "Inserire m quadri seconda casa: ";
  cin>>casa2.m_quadri;

  cout<< "Inserire classe energetica seconda casa: "; 
  cin>>casa2.classeenergetica;

  cout<< "Inserire costo seconda casa: ";
  cin>>casa2.costo;

  if(casa1.costo<casa2.costo){
    cout<<"la prima casa costa di meno e vale "<< casa1.costo;  
  }
  else if(casa1.costo > casa2.costo){
    cout<<"la seconda casa costa di meno e vale "<< casa2.costo;  
  }
  else {
    cout<<"Costano ugualmente e valgono "<< casa1.costo;  
    
  }
  
	return 0;

}