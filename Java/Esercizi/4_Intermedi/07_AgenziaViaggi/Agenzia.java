import java.util.ArrayList;

public class Agenzia {
    private String nome;
    private ArrayList<Viaggio> viaggi;


    // metodo n. 6
    public ArrayList<Viaggio> viaggiCostoInferiore(float costo){
        ArrayList<Viaggio> viaggiInferiore = new ArrayList<Viaggio>();

        for (int i = 0; i < viaggi.size(); i++){
            // scorriamo la lista dei viaggi

            if (viaggi.get(i).calcoloCosto() <= costo){
                // dobbiamo inserire il viaggio

                // ESEMPIO: 325 -> 270  300  320  325  350  370

                int j = 0;
                while (j < viaggiInferiore.size() && viaggi.get(i).calcoloCosto() < viaggiInferiore.get(j).calcoloCosto()){
                    j++;
                }

                viaggiInferiore.add(j, viaggi.get(i));
            }

            else{ /* non inseriamo il viaggio*/}
        }

        return viaggiInferiore;
    }

	// RAGIONAMENTO
    // add(intero, elemento);
    /* scorriamo la lista dei viaggi
          costa meno di costo?
                si
                    scorro gli elementi finchè il costo del successivo è minore
                    inserisco alla posizione i-esima
                no
                    continuo
    */


	// CENNO TEORICO
    // instance of consente di verificare all'interno di una lista della classe base "Viaggio"
    // se gli elementi presenti, istanze di tipo classe derivato, sono di un tipo piuttosto che un altro


    // metodo n. 7
    public ArrayList<Viaggio> viaggioSingoli(String luogo){
        ArrayList<Viaggio> viaggioSingoli = new ArrayList<Viaggio>();

        // scorriamo tutti i viaggi salvati in viaggi
        for(int i = 0; i < viaggi.size(); i++){

            // verifico che sia un viaggio per singoli
            if(viaggi.get(i) instanceof ViaggioPerSingoli){
                //if(viaggi.get(i).equals(luogo))
                //viaggioSingoli.add(viaggi.get(i));


                // controllo se esiste almeno un giorno con luogo quello passato in input
                boolean tmp = false;
                for (int j = 0; j < viaggi.get(i).getLista().size(); j++){
                    if(viaggi.get(i).getLista().get(j).getLuogo().equals(luogo)){
                        tmp = true;
                        break; //esiste, esco
                    }
                }

                if (tmp){
                    int k = 0;

                    // controlliamo che il titolo sia maggiore rispetto a quello verificato, incrementiamo l'indice
                    while(k < viaggioSingoli.size() && viaggi.get(i).getTitolo().compareTo(viaggioSingoli.get(k).getTitolo()) > 0){
                        k++;
                    }

                    // Carrara Firenze Milano Piacenza  Pisa

                    viaggioSingoli.add(k, viaggi.get(i));
                }
            }
        }

        return viaggioSingoli;
    }

    // metodo n.8
    public ArrayList<ViaggioPerGruppi> viaggioGruppi(int minPartecipanti) {
        ArrayList<ViaggioPerGruppi> viaggiPartecipanti = new ArrayList<ViaggioPerGruppi>();

        // scorro tutti i viaggi
        for (int i = 0; i < viaggi.size(); i++) {

            // controlliamo che siano
            if (viaggi.get(i) instanceof ViaggioPerGruppi) {

                // controlliamo che il numero dei partecipanti minimo sia uguale
                if (((ViaggioPerGruppi) viaggi.get(i)).getMinPartecipanti() == minPartecipanti) {

                    // scorriamo i viaggi già inseriti per poter inserire in ordine di numero di giorni

                    int j = 0;

                    // ESEMPIO: 13 => 5 6 10 12 

                    while(j < viaggiPartecipanti.size() && viaggi.get(i).getLista().size() > viaggiPartecipanti.get(j).getLista().size()){
                        j++;
                    }

                    viaggiPartecipanti.add(j, (ViaggioPerGruppi) viaggi.get(i));
                }
            }
        }

        return viaggiPartecipanti;
    }

    // la creazione della lista dei viaggi per gruppi che superano un certo numero di giorni.
    public ArrayList<ViaggioPerGruppi> giorniSuperati(int giorni){
        // creiamo la lista per gli elementi
        ArrayList<ViaggioPerGruppi> v = new ArrayList<ViaggioPerGruppi>();

        // scorriamo i viaggi presenti
        for (int i = 0; i < viaggi.size(); i++){

            // cotnrolliamo che l'elemento sia effettivamente un viaggio per gruppi
            if(viaggi.get(i) instanceof ViaggioPerGruppi){

                // controlliamo che il numero di giorni sia superiore a quello inserito in input
                if(viaggi.get(i).getLista().size() > giorni){

                    // inseriamo nella lista
                    v.add((ViaggioPerGruppi) viaggi.get(i));
                }
            }
        }

        return v;
    }

    public void aggiungiViaggio(Viaggio v){
        boolean tmp = true;

        for(int i = 0; i < viaggi.size(); i++){
            if(viaggi.get(i).equals(v)){
                tmp = false;
            }
        }

        if(tmp) viaggi.add(v);
    }

    public void rimozioneViaggio(Viaggio v){
        for(int i = 0; i < viaggi.size(); i++){
            if(viaggi.get(i).equals(v)){
                viaggi.remove(v);
                return;
            }
        }
    }

    public Agenzia(){
        nome = "";
        viaggi = new ArrayList<Viaggio>();
    }

    public Agenzia(String nome, ArrayList<Viaggio> viaggi){
        this.nome = nome;
        this.viaggi = viaggi;
    }

    public Agenzia(Agenzia c){
        this.nome = c.nome;
        this.viaggi = c.viaggi;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public void setViaggi(ArrayList<Viaggio> viaggi) {
        this.viaggi = viaggi;
    }

    public ArrayList<Viaggio> getViaggi() {
        return viaggi;
    }

	// ========================================
	//				CONTINUO ES 16
	// ========================================
	 
    /*public Viaggio piuCostoso(){
        float max = viaggi.get(0).getCosto();
        int pos = 0;
        
        for(int i = 1; i < viaggi.size(); i++){
          if(max < viaggi.get(i).getCosto()){
            max = viaggi.get(i).getCosto();
            pos = i;
          }
        }

        return viaggi.get(pos);
    }*/



    private Viaggio piuCostosoUtility(int t){
        
		// ESEMPIO
        // valore più grande: 100
        // posizione: 4
        //  10 50 60 23 100

        float max = 0;
        int pos = -1;
        
        for(int i = 0; i < viaggi.size(); i++){

          if(max < viaggi.get(i).getCosto()){
			  // controllo tutti
			  if (t == 0){
					max = viaggi.get(i).getCosto();
            		pos = i;
			  }

			  // controllo solo i singoli
			  else if (t == 1){
				  if (viaggi.get(i) instanceof ViaggioPerSingoli){
					max = viaggi.get(i).getCosto();
            		pos = i;
				  }
			  }

			  // controllo solo i gruppi
			  else if (t == 2){
				  if (viaggi.get(i) instanceof ViaggioPerGruppi){
					max = viaggi.get(i).getCosto();
            		pos = i;
				  }
			  }
           
          }

        }

		if (pos == -1){
			return null;
		}
		
		else{
        	return viaggi.get(pos);
		}
    }

	public Viaggio piuCostoso(){
		return piuCostosoUtility(0);
	}

	public ViaggioPerSingoli piuCostosoSingoli(){
		return (ViaggioPerSingoli) piuCostosoUtility(1);
	}

	public ViaggioPerGruppi piuCostosoGruppi(){
		return (ViaggioPerGruppi) piuCostosoUtility(2);
	}

	// Dato un giorno, restituire tutti i viaggi che hanno in comune tale giorno
    public ArrayList<Viaggio> viaggiInComune(Giorno g){
      ArrayList<Viaggio> tmp = new ArrayList<Viaggio>();

      for(int i = 0; i < viaggi.size(); i++){
        for(int j = 0; j < viaggi.get(i).getLista().size(); j++){
		  if(viaggi.get(i).getLista().get(j).equals(g)){
            tmp.add(viaggi.get(i));
          }
        }
      }
	  
      return tmp;
    }

	// ========================================
	//				CONTINUO ES 17
	// ========================================

	// metodo che restituisce l'elenco dei viaggi per singoli
	public ArrayList<ViaggioPerSingoli> getViaggioPerSingoli(){
	ArrayList<ViaggioPerSingoli> viaggiPerSingoli = new ArrayList<ViaggioPerSingoli>();

		for(int i = 0; i < viaggi.size(); i++){
			if(viaggi.get(i) instanceof ViaggioPerSingoli){
				viaggiPerSingoli.add(viaggi.get(i));
			}
		}

		return viaggiPerSingoli;
	}



	// metodo che restituisce l'elenco dei viaggi per gruppi
	public ArrayList<ViaggioPerGruppi> getViaggioPerGruppi (){
		ArrayList<ViaggioPerSingoli> tmp = new ArrayList<ViaggioPerSingoli>();

		for(int i = 0; i < viaggi.size(); i++){
			if(viaggi.get(i) instanceof ViaggioPerGruppi){
				tmp.add(viaggi.get(i));
			}
		}

		return tmp;
	}
  
	// metodo che restituisce il guadagno totale dell'agenzia
	public float guadagnoAgenzia(){
		float guadagno = 0;

		for(int i = 0; i < viaggi.size(); i++){
		guadagno = guadagno + viaggi.get(i).getCosto();
		}

		return guadagno;
	}


	public float mediaGuadagno(){
		float mediaGuadagno = 0;
		mediaGuadagno = guadagnoAgenzia() / viaggi.size(); // viene utilizzata la funzione precedente per evitare di riscrivere codice
		return mediaGuadagno;
	}

	public ArrayList<ViaggioPerSingoli> viaggioPerSingoliComuni(Giorno g){
		ArrayList<ViaggioPerSingoli> tmp = new ArrayLIst<ViaggioPerSingoli>();

		for (int i = 0; i < viaggi.size(); i++){
			if (viaggi.get(i) instanceof ViaggioPerSingoli){

				for (int j = 0; j < viaggi.get(i).getLista().size(); j++){
					if (viaggi.get(i).getLista().get(j).equals(g)){
						tmp.add(viaggi.get(i));
						break; // esco, so già che il viaggio è 'idoneo'
					}
				}

			}
		}

		return tmp;
	}
}