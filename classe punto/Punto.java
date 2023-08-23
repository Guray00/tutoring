
import java.lang.Math;

public class Punto {
  private float x;
  private float y;
  
  public Punto(){
  	x = 0;
  	y = 0;
  }
   
  public Punto(float x, float y){
  	this.x = x;
  	this.y = y;
  }
  
  public void setX (float x) {
  	this.x = x;
  }
  
  public float getX() {
  	return x;
  }
  
  public void setY(float y) {
  	this.y = y;
  }
  
  public float getY() {
  	return y;
  }
  
  @Override
  public String toString(){
    String str = "{ x: " + x + ", y: " + y+" }";
    return str;
  }
  
  public double distanza(Punto p2){
    // p2 -> punto di arrivo
    // this -> punto di partenza

    double d = Math.sqrt( Math.pow(x-p2.getX(), 2) + Math.pow(y - p2.getY(), 2));
    return d;
  }
  
}
