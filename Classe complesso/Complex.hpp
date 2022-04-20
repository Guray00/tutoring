#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
  private:
    float r_;
    float i_;

  public:
    Complex (float, float );
    float Norm2 ();
    float real();
    float imag();
    void setReal(float);
    void setImag(float);
    Complex operator+(Complex const&);
};



#endif //COMPLEX_H