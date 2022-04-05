#ifndef POINT_H
#define POINT_H

// descriviamo come è fatta una 
// classe Point

class Point{
  private: 
    float x; 
    float y; 

  public: 
    // costruttori
    Point(); 
    Point(float, float);

    // metodi
    float getX(); 
    float getY();
    void setX(float);
    void setY(float);
    float distanza(Point);
};

#endif // POINT_H
