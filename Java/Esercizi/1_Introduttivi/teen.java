/*
Scrivere un metodo chiamato noTeenSum che, dati in input tre numeri
positivi a, b e c di tipo int, restituisca la somma fra i numeri che non sono
numeri teen: un numero è teen se è incluso nell’intervallo [13, 19] ed è
diverso da 15 e da 16. 

Per evitare la duplicazione di codice, scrivere un
metodo fixTeen che, dato in input un numero positivo a di tipo int,
restituisca lo stesso numero se non è teen, al-trimenti restituisca 0.
Utilizzare poi il metodo fixTeen all’interno del metodo noTeenSum.
*/

// a b c => fixTeen(a) + fixTeen(b) + fixTeen(c)

class teen {


	// SCRIVIAMO LA FIXTEEN
	// visibilità [static] tipo_ritorno nome_funzione( parametri ){//..}

	public static int fixTeen(int a){
		// come verifico se a è teen?
		// se a è un numero non compreso tra 13 e 19 e diverso da 15 e 16, allora
		// ridammi a

		// se è teen restituiamo 0, sennò restiuiamo a

		// controllo se siamo in questo intervallo, se ci siamo probabilmente è teen
		if ( a >= 13 && a <= 19){

			// se però entro qua dentro, non è teen
			if(a == 15 || a == 16){ 
				return a;
			}

			// se non sono entrato dove era sopra, sicuramente entro qua, quindi
			// qua è teen
			else {
				return 0;
			}

		}

		return a;
	}


	// SCRIVIAMO LA noTeenSum (...)
	// visibilità [static] tipo_ritorno nome_funzione( parametri ){//..}
  public static int noTeenSum (int a, int b, int c){
  	int somma = fixTeen(a) + fixTeen(b) + fixTeen(c);
    return somma;
  } 

	public static void main(String[] args){
	// ===================================

  	int risultato  = noTeenSum(11, 16, 17);
		System.out.println(risultato);

	// ===================================
	}

}


