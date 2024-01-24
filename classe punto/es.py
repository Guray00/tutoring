import math

class Point: 
  # con le coordinate
  def __init__(self, x=0, y=0):
    self.x = x
    self.y = y

  # funzione che restituisce x 
  def getX(self):
    return self.x
  
  # funzione che restituisce y 
  def getY(self):
    return self.y
  
  # funzione che imposta il valore di x
  def setX(self,x):
    self.x = x

  # funzione che imposta il valore di x
  def setY(self,y):
    self.y = y

  # funzione che restituisce la distanza tra
  # il mio punto e quello che mi viene fornito
  # sqrt( (x1-x2)^2 + (y1-y2)^2 )
  def distanza(self,p):
    return math.sqrt( (self.x - p.getX())**2 + (self.y-p.getY())**2 )
  
  # -> (x, y) <- (1, 2)
  def __str__(self):
    return "("+str(self.x)+", "+ str(self.y) + ")"
  
def main():
  p1 = Point()
  p1.setX(1)
  p1.setY(3)
  print(p1)
  
  p2 = Point(1, 2)
  print(p2)

  print(p2.getX())
  print(p1.distanza(p2))


main()