
import java.util.Scanner;

public class es{

	public static void main(String[] args){
    
    Scanner input= new Scanner (System.in);

    System.out.print("Quanti numeri vuoi inserire?");
    
    int n=input.nextInt();
    
    float sommap=0;
    float somman=0;
    
    int qp=0;
    int qn=0;


    
    for(int i=0; i<n; i++){
      System.out.print("Inserisci numero: ");
      int numero = input.nextInt;
      
      if(numero>=0){
        sommap=sommap+numero;
        qp++;
      }
      else{
        somman=somman+numero;
        qn++;
      }
    }

    // per evitare errori
    if (qp == 0){
      qp = 1;
    }

    if (qn == 0){
      qn = 1;
    }

    float mediap = sommap/qp;
    float median = somman/qn;
     
    System.out.print("La media dei positivi viene: "+mediap);
    System.out.print("La media dei negativi viene: "+median);
	}
}