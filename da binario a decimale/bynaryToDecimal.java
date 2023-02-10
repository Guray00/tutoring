public class bynaryToDecimal{

	public static void main(String[] args){

		int v [] = {1, 0, 0, 1};

        int ris=0;
        for(int i=0;i<v.length;i++){
          ris= (int) ris+((int)v[i])*((int)Math.pow(2,v.length-1-i));
        }
        
        System.out.println(ris);
      
	}
}