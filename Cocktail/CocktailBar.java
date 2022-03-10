import java.util.ArrayList;

public class CocktailBar {
	private String nomeLocale;
	private ArrayList<Cocktail> cocktail;

	public CocktailBar() {
		this.nomeLocale = "";
		this.cocktail = new ArrayList<Cocktail>();
	}

	public CocktailBar(String nomeLocale, ArrayList<Cocktail> cocktail) {
		this.nomeLocale = nomeLocale;
		this.cocktail = cocktail;
	}

	public CocktailBar(CocktailBar c) {
		this.nomeLocale = c.nomeLocale;
		this.cocktail = c.cocktail;
	}

	public void setNomeLocale(String nomeLocale) {
		this.nomeLocale = nomeLocale;
	}

	public String getNomeLocale() {
		return this.nomeLocale;
	}

	public void setCocktail(Cocktail cocktail) {
		this.cocktail = cocktail;
	}

	public ArrayList<Cocktail> getCocktail() {
		return this.cocktail;
	}

	// =====================================
	// 			METODI IMPLEMENTATI
	// =====================================

	// 2) per l’aggiunta/rimozione di cocktail al listino del bar
	public void addCocktail(Cocktail cocktail) {
		cocktail.add(cocktail);
	}

	public void removeCocktail(Cocktail cocktail) {
		cocktail.remove(cocktail);
	}

	// 4) per la creazione della lista dei cocktail alcolici al di sotto di una
	// certa gradazione, in ordine decrescente del grado alcolico
	public ArrayList<CocktailAlcolico> listaCocktailAlDiSotto(float gradazione) {

		// ArrayList di appoggio per salvare i cocktail
		ArrayList<CocktailAlcolico> cocktailAlDiSotto = new ArrayList<CocktailAlcolico>();
		// scorriamo i cocktail
		for (int i = 0; i < cocktail.size(); i++) {

			// Verifico se sono alcolici e che siano al di sotto della grazione
			if (cocktail.get(i) instanceof CocktailAlcolico && cocktail.get(i).getGradazioneAlcolica() < gradazione) {

				// 5 -> 100 70 (40) 30 20

				// abbiamo un ciclo in cui verifichiamo: se il numero verificato è maggiore di
				// quello con cui è paragonato e se arriva in fondo lo mette in fondo
				for (int j = 0; j < cocktail.size(); j++) {
					if (cocktail.get(i).getGradazioneAlcolica() > cocktailAlDiSotto.get(j).getGradazioneAlcolica()) {
						// inserisco il cocktail
						cocktailAlDiSotto.add(j, (CocktailAlcolico) cocktail.get(i));
					}
				}
			}
		}
		// ritorniamo la lista
		return cocktailAlDiSotto;
	}

	// 5) metodo per la creazione della lista dei cocktail che contengono un certo
	// componente, in ordine alfabetico (inserimento ordinato)
	
  	public ArrayList<Cocktail> listaCocktailConComponente(Componente c){
   		ArrayList<Cocktail> listaCocktail = new ArrayList<Cocktail>();
		
		// scorriamo la lista dei cocktail
		for(int i = 0; i < cocktail.size(); i++){
			// scorriamo tutti i componenti del cocktail i-esimo
				for (int j=0; j < cocktail.get(i).getComponenti().size(); j++){
					// controlliamo se il componente è presente
          			if(cocktail.get(i).getComponenti().get(j).equals(c)){
						for(int p = 0; p < listaCocktail.size(); p++){
							if((cocktail.get(i).getNome().compareTo(listaCocktail.get(p).getNome()) > 0)){
								// non fai niente
							}

							else{
								listaCocktail.add(p, cocktail.get(i));
								break; // esci dal ciclo
							}
						}
                	}
				}			
     	}

		return listaCocktail;
  	}
	// 6) metodo per la creazione della lista dei cocktail con prezzo maggiore di una certa
	// cifra, in ordine di prezzo (inserimento ordinato)
  	public ArrayList<Cocktail> listaCocktailPerPrezzo(float prezzo){
		ArrayList<Cocktail> listaCoctail = new ArrayList<Cocktail>();
		
		for(int i = 0; i < cocktail.size(); i++){
			if(cocktail.get(i).getPrezzo() > prezzo){
				for(int j = 0; j < listaCoctail.size(); j++){
					if(cocktail.get(i).getPrezzo() < listaCoctail.get(j).getPrezzo()){
						listaCoctail.add(j, cocktail.get(i));
						break;
					}
				}
			}
		}

		return listaCoctail;
  	}


	// ==========================================
	//			SECONDA PARTE
	// ==========================================

	// Metodo che restituisce una lista di cocktail alcolici che contengono un determinato componente passato come paramentro.
	public ArrayList<Cocktail> listaCocktailAlcolici(Componente c){
		ArryList<Cocktail> listaCocktail = new ArryList<Cocktail>();

		for(int i = 0; i < cocktail.size(); i++){
			if(cocktail.get(i) instanceof CocktailAlcolico){
				for(int j = 0; j < cocktail.get(i).getComponenti().size(); j++){
					if(cocktail.get(i).getComponenti().get(j).equals(c)){
						listaCocktail.add(cocktail.get(i));
					}
				}
			}
		}
		
		return listaCocktail;
	}
	
	
	// Metodo che restituisce una lista di componenti di un cocktail che hanno un determinato prezzo (il cocktail ed il prezzo sono passati come parametro).

	public ArrayList<Componente> controlloComponenti(Cocktail c, int prezzo){
		ArrayList<Componente> listaComponenti = new ArrayList<Componente>();

		for (int i = 0; i < c.getComponenti().size(); i++){
			if (c.getComponenti().get(i).getCostoUnitario() == prezzo){
				listaComponenti.add(c.getComponenti().get(i));
			}
		}

		return listaComponenti;
	}

	// Metodo che restitiuisce il valore complessivo di tutti i cocktail disponibili nel bar.
	public float prezzoComplessivo(){
		float tmp = 0;

		for (int i=0; i < cocktail.size(); i++){
			tmp += cocktail.get(i).getPrezzo; 
		}

		return tmp;
	}

	// Metodo che, passato come parametro un cocktail, restituisce vero se è alcolico e falso se è analicolico.
	public boolean checkAlcolico(Cocktail c){

		if(c instanceof CocktailAlcolico){
			return true;
		}

		return false;
	}

	// Metodo che restituisce il numero di coctail alcolici disponibili nel bar.
	public int numeroAlcolici(){
		int tmp = 0;
		for (int i = 0; i < cocktail.size(); i++){

			if (cocktail.get(i) instanceof CocktailAlcolico){
				tmp = tmp + 1;
			}

		}

		return tmp;
	}


	// Metodo che restituisce il numero di cocktail analcolici disponibili nel bar.
	public int numeroAnalcolici(){
		int tmp = 0;
		for (int i = 0; i < cocktail.size(); i++){

			if (cocktail.get(i) instanceof CocktailAnalcolico){
				tmp = tmp + 1;
			}

		}

		return tmp;
	}
}
