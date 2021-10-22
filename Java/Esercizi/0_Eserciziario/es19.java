
// Scrivere l'algoritmo che, presi in input gli estremi a e b di un intervallo e un valore x, visualizzi il messaggio "Il valore è interno all'intervallo" se a ≤ x ≤ b, altrimenti "Il valore è esterno all'intervallo".

import java.util.Scanner;

public class es19 {
 
	
	public static void main(String[] args) {
		
		Scanner tastiera = new Scanner(System.in);

		System.out.println("Inserisci l'estremo inferiore: ");
  	int num1 = tastiera.nextInt();
    
		System.out.println("Inserisci l'estremo superiore: ");
		int num2 = tastiera.nextInt();

		System.out.println("Inserisci x: ");
    int num3 =  tastiera.nextInt();
	
		// && => AND c1 e c2 sono vere => dice che è vero
		// || => OR  almeno uno tra c1 e c2 sono è vera => dice che è vero


		/* Tabella di verità dell'and
					c1			c2
					vero    vero   => vero
					falso   vero   => falso
					vero    falso  => falso
					falso   falso  => falos
		*/

		/* Tabella di verità dell'or
					c1			c2
					vero    vero   => vero
					falso   vero   => vero
					vero    falso  => vero
					falso   falso  => falso
		*/

		// x        num1       x          x        num2
		// 7 è > di   1    AND 7 è anche  7  < di   10
		
    if (num3 >= num1 && num3 <= num2){
			System.out.println("il valore e' interno all'intervallo");
		}
		else {
			System.out.println("Il valore non è interno all'intervallo");
		}

	}
}
