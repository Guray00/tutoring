
/*
=== ESERCIZIO ===
Il volume di un cilindro di altezza h e raggio di base r `e uguale
a r*rhπ. Scrivere un programma che:

- dichiari e inizializzi tre variabili per l’altezza, 
  il raggio e il volume;	
- stampi il valore del volume.
*/

/*
=== ANNOTAZIONI ===
- creo 3 variabili intere h, r, v.
- faccio la formula per calcolare il volume, mettiamo il risultato su v
- mostro a schermo il risultato
*/



class es1 {

	// funzione che indica dove parte il programma
	public static void main(String[] args){
		
		// inzializzo le variabili
		float h = 8;
    float r = 4;
    float v = 0;

		// eseguiamo la formula
    v = r*r * h * 3.14f;
	
		// stampiamo a schermo il risultato
    System.out.println(v);
	}		
}