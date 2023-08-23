#include "Triangle.h"
#include "Point.h"


//nomeClasse::Metodo(parametri)
Triangle::Triangle(Point p_a, Point p_b, Point p_c){
  a=p_a; 
  b=p_b; 
  c=p_c; 
}

Point Triangle::getA(){
    return a; 
}

Point Triangle::getB(){
    return b; 
}

Point Triangle::getC(){
    return c; 
}

void Triangle::setA(Point p_a)
{
  a=p_a; 
}

void Triangle::setB(Point p_b)
{
  b=p_b; 
}

void Triangle::setC(Point p_c)
{
  c=p_c; 
}

float Triangle::CalcolaPerimetro()
{
  // dobbiamo fare la somma dei lati
  // come trovo i lati?
  // DISTANZA TRA A E B =>  a.distanza(b);

  return a.distanza(b)+b.distanza(c)+c.distanza(a); 
  
}
