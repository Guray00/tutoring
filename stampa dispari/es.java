
// Scrivere un algoritmo che stampi a schermo i numeri dispari da 3 a 21

public class es{

	public static void main(String[] args){

    for(int i=3; i<=21; i++ ){

      // se il numero è dispari, stampalo  i%2 != 0
      if(i%2!=0){
        System.out.print(i+" ");  
      }
      
    }
	
  }
}