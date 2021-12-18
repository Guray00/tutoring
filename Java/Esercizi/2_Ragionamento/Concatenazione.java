public class Concatenazione{

	public static void main(String[] args){

		int x = 12345;
        int n = 5;


        long somma=0;
        int j=0;
        // faccio un ciclo per scorrere i numeri di x
        for(int i=0;i<n;i++){
          int tmp = x%10;
          x=x/10;
          int duplicate=tmp*10+tmp;

          somma =  duplicate * (long) Math.pow(10, j) + somma;
          
          j = j + 2;

        }
        System.out.println(somma);
	}
}