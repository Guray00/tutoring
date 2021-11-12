class sumDiversi {


	public static void main(String[] args){

		// gli dai 3 interi e fa la somma degli interi se sono diversi,
		// se sono uguali ti stampa il terzo diverso

		int a = 10;
		int b = 3;
		int c = 3;

		if (a!=b && b!=c && c!=a){
			System.out.println(a+b+c);	
		} 

		else if (a!=b && b==c){
			System.out.println(a);
		} 
		
		else if (a==b && b!=c){
			System.out.println(c);
		} 
		
		else if (c==a && c!=b){
			System.out.println(b);
		}

	}

}


