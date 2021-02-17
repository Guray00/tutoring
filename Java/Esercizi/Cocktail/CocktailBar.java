import java.util.ArrayList;

public class CocktailBar{
	private String nomeLocale;
  	private ArrayList<Cocktail> cocktail;

	public CocktailBar(){
		this.nomeLocale = "";
		this.cocktail = new ArrayList<Cocktail>();
	}

	public CocktailBar(String nomeLocale, ArrayList<Cocktail> cocktail){
		this.nomeLocale = nomeLocale;
		this.cocktail = cocktail;
	}

	public CocktailBar(CocktailBar c){
		this.nomeLocale = c.nomeLocale;
		this.cocktail = c.cocktail;
	}

	public void setNomeLocale(String nomeLocale){
		this.nomeLocale = nomeLocale;
	}

	public String getNomeLocale(){
		return this.nomeLocale;
	}

	public void setCocktail(Cocktail cocktail){
		this.cocktail = cocktail;
	}

	public ArrayList<Cocktail> getCocktail(){
		return this.cocktail;
	}


  	// 2) per l’aggiunta/rimozione di cocktail al listino del bar
	public void addCocktail(Cocktail cocktail){
		cocktail.add(cocktail);
	}

	public void removeCocktail(Cocktail cocktail){
		cocktail.remove(cocktail);
	}

	// 4) per la creazione della lista dei cocktail alcolici al di sotto di una certa gradazione, in ordine decrescente del grado alcolico
  	public ArrayList<CocktailAlcolico> listaCocktailAlDiSotto(float gradazione){
    
		// ArrayList di appoggio per salvare i cocktail
      ArrayList<CocktailAlcolico> cocktailAlDiSotto = new ArrayList<CocktailAlcolico>();
		// scorriamo i cocktail
      	for(int i = 0; i < cocktail.size(); i++){
        
		  	// Verifico se sono alcolici e che siano al di sotto della grazione
			if(cocktail.get(i) instanceof CocktailAlcolico && cocktail.get(i).getGradazioneAlcolica() < gradazione){

				// 5 -> 100 70 (40) 30 20

				// abbiamo un ciclo in cui verifichiamo: se il numero verificato è maggiore di quello con cui è paragonato e se arriva in fondo lo mette in fondo
				for(int j = 0; j < cocktail.size(); j++){
					if(cocktail.get(i).getGradazioneAlcolica() > cocktailAlDiSotto.get(j).getGradazioneAlcolica()){
						// inserisco il cocktail
						cocktailAlDiSotto.add(j, (CocktailAlcolico) cocktail.get(i) );
					}
        		}
			}		
        }
		//ritorniamo la lista
		return cocktailAlDiSotto;
  	}
}