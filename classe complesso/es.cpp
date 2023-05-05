#include <iostream>
#include "Complex.hpp"


// funzione esterna
float norm3(Complex c){
  return c.imag() * c.imag() + c.real() * c.real();
}



// main del programma
int main(){

  Complex c(3, 2);
  float risultato = c.Norm2();
  float ris2 = norm3(c);

  std::cout<<"norm2: "<<risultato<<std::endl;
  std::cout<<"norm2: "<<ris2<<std::endl;


  Complex c1(3, 2);
  Complex c2(2, 3);
  
  Complex c3 = c1 + c2;
  std::cout<< c3.real() << " + "<<c3.imag()<<"i";
  
  return 0;
}