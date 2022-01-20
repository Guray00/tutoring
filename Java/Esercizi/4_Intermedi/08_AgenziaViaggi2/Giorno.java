

public class Giorno{
	// Ciascun Giorno è rappresentato da un numero d’ordine __(intero)__, il nome del luogo e una breve descrizione; 

	private int ordine;
	private String nome;
	private String descrizione;	

	public Giorno(){
		ordine = -1;
		nome = "";
		descrizione = "";
	}

	public Giorno(int o, String n, String d){
		ordine = o;
		nome = n;
		descrizione = d;
	}

	public Giorno (Giorno o){
		this.ordine = o.getOrdine();
		this.nome = o.getNome();
		this.descrizione = o.getDescrizione();
	}

	// get e set

	public String getOrdine(){
		return this.ordine;
	}

	public String getNome(){
		return this.nome;
	}

	public SString getDescrizione(){
		return this.descrizione;
	}

	// Due oggetti di tipo Giorno sono considerati uguali se hanno lo stesso numero d’ordine.

	public boolean equal(Giorno g){
		if(g.getOrdine().equals(this.ordine)){
			return true;
		}
		
		return false;
	}
}
