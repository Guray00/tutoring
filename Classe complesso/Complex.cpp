#include "Complex.hpp"


// costruttore per la classe complesso
Complex::Complex (float x, float y) : r_{x} , i_{y}{};

// funzione che calcola la norma di un complesso
float Complex::Norm2 (){
  return r_ * r_ + i_*i_;
}

// funzione che ritorna la parte reale
float Complex::real (){
  return r_;
}

// funzione che ritorna la parte immaginaria
float Complex::imag () {
  return i_;
}

void Complex::setReal(float a){
  r_ = a;
};


void Complex::setImag(float a){
  i_ = a;
};

// operator+ ridefinito all'interno della classe complesso
Complex Complex::operator+(Complex const& c2){

  Complex c3(r_, i_);
  c3.r_ = c3.r_ + c2.r_;
  c3.i_ = c3.i_ + c2.i_;
  
  return c3;
}