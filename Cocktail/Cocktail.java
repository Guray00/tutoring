import java.util.ArrayList;

public class Cocktail {
	public String nome;
	public ArrayList<Componente> componenti;

	public Cocktail(){
		this.nome = "";
		this.componenti = new ArrayList<Componente>();
	}

	public Cocktail(String nome, ArrayList<Componente> componenti){
		this.nome = nome;
		this.componenti = componenti;
	}

  public Cocktail(Cocktail c){
    this.nome = c.nome;
    this.componenti = c.componenti;
  }

	public void setNome(String nome){
		this.nome = nome;
	}

	public String getNome(){
		return nome;
	}

	public void setComponenti(Componente componenti){
		this.componenti = componenti;
	}

	public ArrayList<Componente> getComponenti(){
		return this.componenti;
	}
	
	// =====================================
	// 			METODI IMPLEMENTATI
	// =====================================

  
	// 1) per l’aggiunta/rimozione di componenti ai cocktail
	public void addComponente(Componente comp){
		componenti.add(comp);
	}

	public void removeComponente(Componente comp){
		componenti.remove(comp);
	}

	// 3) Calcolo prezzo del cocktail
	public float getPrezzo(){
		// creiamo una variabile di appoggio per salvare i prezzi
        float prezzoCocktail = 0;
		// scorriamo tutti gli elementi
		for(int i = 0; i < componenti.size(); i++){
			// per ogni elemento moltiplichiamo la quantità per il costo unitario e sommiamo alla variabile di appoggio
			prezzoCocktail += componenti.get(i).getCostoUnitario() * componenti.get(i).getQuantita();
		}
		
		// ritorniamo il prezzo del cocktail
    	return prezzoCocktail;
	}
	

	public String toString(){
		String tmp = nome + "\n";
		
		for(int i = 0; i < componenti.size(); i++){
			tmp+="\t=>"+componenti.get(i).getNome() + " \tQuantita: " + componenti.get(i).getQuantita()+" \tCostoUnitario: "+ componenti.get(i).getCostoUnitario()+"\n";
		}
		
		return tmp; 

	}
	
}