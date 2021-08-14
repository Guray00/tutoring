
// array di prenotazioni
public class Albergo{
  private Prenotazione[] vet_pren;
	private Camera[] vet_cam;

	// costruttore di default
  public Albergo(){
    this.vet_pren = new Prenotazione[10000];
  	this.vet_cam = new Camera[10000];
	}

	// aggiunta di un elemento
	public void addPrenotazione(Prenotazione p, int i){
		this.vet_pren[i] = p;
	}

  // rimozione di un elemento
  public void delPrenotazione(int i){
		this.vet_pren[i] = null;
	}

	public void addCamera(Camera p, int i){
		this.vet_cam[i] = p;
	}

  // rimozione di un elemento
  public void delCamera(int i){
		this.vet_cam[i] = null;
	}

	// per la ricerca delle prenotazioni di un certo giorno 
	public Prenotazione[] cercaPrenotazione(int d){
		
		// vettore di prenotazioni da restituire
		Prenotazione[] pren = new Prenotazione[10000];
		int indice = 0;

		for (int i = 0; i < 10000; i++){

			if (vet_pren[i] != null && vet_pren[i].getDataFine() >= d && vet_pren[i].getDataInizio() <= d ){
				pren[indice] = vet_pren[i];
				indice++;
			}
		}

		

		return pren;
	}


	// per la ricerca delle camere libere
  public Camera[] getLibere(){

		Camera[] vet = new Camera[10000];
		int indice = 0;
		
		// scorriamo tutte le camere
		for(int i = 0; i < 10000; i++){

			// controlliamo se una camera è occupata
      if(vet_cam[i] != null && !vet_cam[i].getOccupato()){

				// se è libera, la aggiungiamo al vettore delle camere libere
				vet[indice] = vet_cam[i];
				indice++;
      }

    }

		return vet;
	}


    

/*
- per l'aggiunta/rimozione di una prenotazione 
- per l'aggiunta/rimozione di una camera all'albergo 
- per la ricerca delle prenotazioni di un certo giorno 
- per la ricerca delle camere libere
*/

}