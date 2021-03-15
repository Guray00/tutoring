public class Volo{
	private String codice;
	private String destinazione;
	private GregorianCalendar data;
	private String origine;
	private ArrayList<Bagaglio> bagagli;

/*
... 
... elencoBagagliManoEccedenti(...): metodo privato che restituisce l'elenco dei soli bagagli a mano con peso eccedente
... stampaInfoBagagliManoEccedenti(...): metodo che stampa a schermo l'elenco dei soli bagagli a mano con peso eccedente e le relative informazioni
l'elenco dei soli bagagli a mano ordinato per cognome passeggero crescente
l'elenco dei bagagli da stiva con peso eccedente ordinato per peso decrescente
*/


	//totTariffeSupplementari(...): metodo che calcola e restituisce il valore dell'importo totale delle tariffe supplementari.
	public float totTariffeSupplementari(){
		float tmp = 0;

		for (int i = 0; i < bagagli.size(); i++){
			tmp += brani.get(i).tariffaSupplementare();
		}

		return tmp;
	}

	// pesoEccedenteTotale(...): metodo che calcola e restituisce il peso eccedente totale dei bagagli
	public float totPesoEccedente(){
		float tmp = 0;

		for (int i = 0; i < bagagli.size(); i++){
			tmp += brani.get(i).pesoEccedente();
		}

		return tmp;
	}

	// ... elencoBagagliMano(...): metodo privato che restituisce l'elenco dei soli bagagli a mano

	public ArrayList<BagaglioMano> elencoBagagliMano(){
		ArrayList<BagaglioMano> tmp = new ArrayList<BagaglioMano>();

		for (int i = 0 ; i < bagagli.size(); i++){
			if (bagagli.get(i) instanceof BagaglioMano){
				tmp.add(bagagli.get(i));
			}
		}

		return tmp;
	}

	// stampaInfoBagagliMano(...): metodo che stampa a schermo l'elenco dei soli bagagli a mano e le relative informazioni

	public void stampaInfoBagagliMano(){
		ArrayList<BagaglioMano> tmp = elencoBagagliMano();
	
		for (int i = 0; i < tmp.size(); i++){
			System.out.println("Peso:" +  tmp.get(i).getPeso() + " Nome: "+ tmp.get(i).getNome() + " Cognome: "+ tmp.get(i).getCognome());
		}
	}

	//elencoBagagliManoEccedenti(...): metodo privato che restituisce l'elenco dei soli bagagli a mano con peso eccedente

	
}