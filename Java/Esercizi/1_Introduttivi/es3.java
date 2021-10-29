/*
Scrivere un programma che dichiari e inizializzi una variabile per un numero positivo di al massimo tre cifre;

- dichiari una variabile per la somma delle cifre del numero;
- calcoli la somma delle cifre del numero;
- stampi il numero e la somma delle sue cifre.
*/



class es3 {

	// funzione che indica dove parte il programma
	public static void main(String[] args){

		// chiedi un numero di 3 cifre
		// => chiamiamo in qualche modo queste 3 cifre
		int a = 9;
		int b = 2; 
		int c = 3;

		
		// calcolare la somma delle cifre
		int somma = a + b + c;


		// il numero delle cifre e la loro somma
    System.out.println("Il numero è: "+a+""+b+""+c+", mentre la somma delle sue cifre è: "+somma);

	}		
}