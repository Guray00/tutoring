/*
Classe BranoMusicale
Con attirubuti:
- titolo del brano (String)
- anno di pubblicazione (int)
- duratain secondi (int)
*/

public class BranoMusicale{
	private String titolo;
	private int anno;
	int durata;

	public BranoMusicale(){
		titolo = "";
		anno = -1;
		durata = -1;
	}

	public BranoMusicale(String t, int a, int d){
		titolo = t;
		anno = a;
		durata = d;
	}

	public BranoMusicale(BranoMusicale o){
		this.titolo = o.titolo;
		this.anno = o.anno;
		this.durata = o.durata;
	}

	public String getTitolo(){
		return titolo;
	}

	public int getAnno(){
		return anno;
	}

	public int getDurata(){
		return durata;
	}


	/*Nella classe BranoMusicale realizzare il metodo String toString() che restituisce
una stringa contenente tutte le informazioni relative all'oggetto*/

	public String toString(){
		return "Titolo: "+titolo+ " Anno: "+ anno + "Durata: "+durata;
	}
}