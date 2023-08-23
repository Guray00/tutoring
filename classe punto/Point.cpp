#include "Point.h"
#include "math.h"

// prendi da Point la funzione Point (costruttore di default)
Point::Point(){
  x = 0;
  y = 0;
}

// costruttore Point(float, float);
Point::Point(float p_x, float p_y){
  x = p_x;
  y = p_y;
}

// float getX( );
float Point::getX() 
{
  return x; 
}

// float getY();
float Point::getY() 
{
  return y; 
}

//void setX(float);
void Point::setX(float p_x)
{
    x=p_x; 
}

void Point::setY(float p_y)
{
    y=p_y; 
}

//float distanza(Point);

float Point::distanza(Point p)
{
  // applicare pitagora per calcolare la distanza
  // p.x => ti restituisce la x di p
  // p.y => ti restituisce la y di p
  float distanza = sqrt( pow( (x-p.x), 2) + pow((y-p.y), 2) );
  return distanza; 
}



