import java.util.ArrayList;

/*
Classe Disco
Con attirubuti:
• nome del disco (String)
• un Vector (o Array list) di oggetti di tipo BranoMusicale
Realizzare i seguenti punti:
*/


public class Disco{
	private String nome;
	private ArrayList<BranoMusicale> brani;


//• boolean ricerca (String titolo) che restituisce true se il brano con un dato titolo esiste e false se il brano non esiste
	public boolean ricerca (String titolo){
		for (int i = 0; i < brani.size(); i++){
			if (brani.get(i).getTitolo().equals(titolo)){
				return true;
			}
		}

		return false;
	}

	//boolean aggiungiBrano (BranoMusicale brano) aggiunge un brano alla lista, restituendo true se il brano passato come parametro non è già presente nella lista (controllare il titolo). Se esiste già un brano con quel titolo, restituisce false

	public boolean aggiungiBrano(BranoMusicale brano){
		boolean tmp = ricerca(brano.getTitolo());

		if (tmp){
			brani.add(brano);
			return true;
		}

		return false;
	}

	// int contaBraniAnno (int anno) che conteggia e restituisce il numero di brani prodotti in un certo anno
	public int contaBraniAnno(int anno){
		int tmp = 0;
		
		for (int i = 0; i < brani.size(); i++){
			if (brani.get(i).getAnno() == anno){
				tmp++;
			}
		}

		return tmp;
	}

	// BranoMusicale maxDurata() che ritorna il brano musicale con la durata maggiore
	public BranoMusicale maxDurata(){
		int indice = 0;

		for (int i = 0; i < brani.size(); i++){
			if (brani.get(indice).getDurata() < brani.get(i).getDurata()){
				indice = i;
			}
		}

		return brani.get(indice);
	}
}