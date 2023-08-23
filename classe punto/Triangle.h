#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"

class Triangle{
    private:
      // attributi della classe
      Point a; 
      Point b;
      Point c; 

    public:
      // costruttori
      Triangle(Point, Point, Point ); 

      // metodi
      Point getA(); 
      Point getB(); 
      Point getC(); 
      void setA(Point); 
      void setB(Point); 
      void setC(Point); 
      float CalcolaPerimetro(); 
};





#endif // TRIANGLE_H
