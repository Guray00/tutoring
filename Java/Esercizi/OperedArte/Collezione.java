import java.util.ArrayList;

public class Collezione{
	private String nome;
	private String luogo;
	private ArrayList<Opera> opere;


	//il nome dell’artista dell’opera più costosa
	public String operaMaxCosto(){
		int indice = 0;

		// 4 3 2 1

		for (int i = 1; i < opere.size(); i++){
			if (opere.get(i).getCosto > opere.get(indice).getCosto()){
				indice = i;
			}
		}

		return opere.get(indice).getArtista();
	}


	//la quantità di opere di tipo quadro e di opere di tipo scultura presenti nella collezione
	public int numeroQuadri(){
		int tmp= 0;

		for (int i = 0; i<opere.size(); i++){
			if (opere.get(i) instanceof Quadro){
				tmp++;
			}
		}

		return tmp;
	}

	public int numeroSculture(){
		int tmp= 0;

		for (int i = 0; i<opere.size(); i++){
			if (opere.get(i) instanceof Scultura){
				tmp++;
			}
		}

		return tmp;
	}


	// il valore totale della collezione
	public int valoreTotale(){
		float tmp = 0;

		for (int i = 0; opere.size(); i++){
			tmp += opere.get(i).getCosto(); 
		}

		return tmp;
	}

	// il valore totale per ogni singola tipologia di opere
	public int valoreTotaleQuadri(){
		float tmp = 0;

		for (int i = 0; opere.size(); i++){
			if (opere.get(i) instanceof Quadro)
				tmp += opere.get(i).getCosto(); 
		}

		return tmp;
	}

	public int valoreTotaleSculture(){
		float tmp = 0;

		for (int i = 0; opere.size(); i++){
			if (opere.get(i) instanceof Scultura)
				tmp += opere.get(i).getCosto(); 
		}

		return tmp;
	}

	/*
	metodo che riordina la lista completa di opere per prezzo crescente o decrescente in base ad un parametro booleno passato in input al metodo (utilizzare l'algoritmo di ordinamento per selezione)
	*/

	// true -> crescente		 false -> decrescente
	public void riordina(boolean metodo){

		for (int i = 0; opere.size(); i++){

			for (int j = i+1; j < opere.size(); j++){
				
				// crescente
				if (metodo){
					if (opere.get(i).getCosto() > opere.get(j).getCosto()){
						Opera tmp = opere.get(j);
						opere.set(j, opere.get(i));
						opere.set(i, tmp);
					}
				}

				// decrescente
				else {
					if (opere.get(i).getCosto() < opere.get(j).getCosto()){
						Opera tmp = opere.get(j);
						opere.set(j, opere.get(i));
						opere.set(i, tmp);
					}
				}

			}
		}
	}


	// • metodo che restituisca una stringa con i dati di tutte le opere della collezione
	public String informazioni(){
		String tmp = "";

		for (int i = 0; i < opere.size(); i++){
			tmp+= opere.get(i).toString() + "\n";
		}

		return tmp;
	}

	//• metodo che restituisce l'elenco delle opere che hanno una quotazione maggiore di un determinato valore passato in input

	public ArrayList<Opera> opereMaggioreDi (float q){
		ArrayList<Opera> tmp = new ArrayList<Opera>();

		for (int i = 0; i < opere.size(); i++){

			if (opere.get(i).getCosto() > q){
				tmp.add(opera.get(i));
			}
		}

		return tmp;
	}


	// metodo che restituisce l'elenco delle opere che hanno una quotazione maggiore della quotazione media di tutte le opere

	public ArrayList<Opera> opereMaggioreMedia(){
		float tmp=0;
		for (int i = 0; i < opere.size(); i++){
			tmp+=opere.get(i).getCosto();
		}

		tmp = tmp/opere.size();
		return opereMaggioreDi(tmp);
	}
}