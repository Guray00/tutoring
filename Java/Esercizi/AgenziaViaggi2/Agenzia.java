import java.util.ArrayList;

public class Agenzia {
	String nome;
	ArrayList<Viaggio> viaggi;

	public Agenzia(){
		nome = "";
		viaggi = new ArrayList<Viaggio>();
	}

	public Agenzia(String n, ArrayList<Viaggio> v){
		nome = n;
		viaggi = v;
	}

	public Agenzia(Agenzia o){
		A.nome = o.nome;
		a.viaggi = o.viaggi;
	}

	// l’aggiunta di un viaggio alla lista di un’agenzia (se non presente);
	public boolean aggiungiViaggio(Viaggio g){
    for(int i = 0; i < viaggi.size(); i++){
      if(viaggi.get(i).equal(g)){
        return false;
      }
    }
    viaggi.add(g);
    return true;
  }

  //la rimozione di un viaggio dalla lista di un’agenzia (se presente);
  public boolean rimozioneViaggio(Viaggio g){
    for(int i = 0; i < viaggi.size(); i++){
      if(viaggi.get(i).equal(g)){
        viaggi.remove(g);
        return true;
      }
    }
    return false;
  }

  //la creazione della lista dei viaggi con costo inferiore ad un certo valore, in ordine decrescente rispetto al costo;
  public ArrayList<ViaggioPerSingoli> viaggiCostoInferiore(float costo){
    ArrayList<ViaggioPerSingoli> tmp = new ArrayList<ViaggioPerSingoli>();
    
	// 40 => 50 20 10

	for(int i = 0; i < viaggi.size(); i++){
      if(viaggi.get(i).calcolaPrezzo() < costo){
		  for (int j = 0; j < tmp.size(); j++){
			  if (viaggi.get(i).calcolaPrezzo() > tmp.get(j).calcolaPrezzo()){
				  tmp.add(j, (ViaggioPerSingoli) viaggi.get(i));
			  }
		  }
      }
    }

	return tmp;
  }

  // la creazione della lista dei viaggi per singoli che passano da una certa località, in ordine alfabetico per titolo del viaggio;
  public ArrayList<Viaggio> viaggiSingoliPerUnaLocalita(String l){

    ArrayList<Viaggio> viaggiLocalita = new ArrayList<Viaggio>();

    for(int i = 0; i < viaggi.size(); i++){
      for(int j = 0; j < viaggi.size(); j++){
        if(viaggi.get(i).giorni.get(j).getNome().equals(l)){
			/*
				scorrere tutti gli elementi di viaggilocalità
					controllo in nome di quello che sto inserendo, se è maggiore continuo
					
					else
						inserisco
						esci
			
			*/

		// Firenze => Ancona Bari Milano Roma

			for (int k = 0; k < viaggiLocalita.size(); k++){
				if(viaggi.get(i).getNome() < viaggiLocalita.get(k).getNome()){
					viaggiLocalita.add(k, viaggi.get(i));
					break;
				}
			}
        }
      }
    }

	return viaggiLocalita;
  }

  // la creazione della lista dei viaggi per gruppi con numero minimo di partecipanti uguale ad un certo valore, ordinati per numero di giorni previsti;

  public ArrayList<Viaggio> viaggiGruppoConMinimoPartecipanti(int n){
    ArrayList<ViaggioPerGruppi> viaggiPartecipanti = new ArrayList<Viaggio>();

    for(int i = 0; i < viaggi.size(); i++){
    	if(viaggi.get(i) instanceof ViaggioPerGruppi && viaggi.get(i).getMin() == n){
    	
				// (10) => 5 20 30
        	for(int j = 0; j < viaggiPartecipanti.size(); j++){
          		if(viaggi.get(i).getGiorni().size() < viaggiPartecipanti.get(j).getGiorni().size()){
            		viaggiPartecipanti.add(j, (ViaggioPerGruppi) viaggi.get(i));
          		}
        			
			}
      }
    }

	return viaggiPartecipanti;
  }


	//la creazione della lista dei viaggi per gruppi che superano un certo numero di giorni.
  public ArrayList<ViaggioPerGruppi> viaggiConPiuDiUnCertoNumeroDiGiorni(int g){
    ArrayList<ViaggioPerGruppi> viaggiGiorni = new ArrayList<ViaggioPerGruppi>();
    
	for(int i = 0; i < viaggi.size(); i++){
      	if(viaggi.get(i) instanceof ViaggoPerGruppi && viaggi.get(i).getGiorni().size() > g){
			viaggiGiorni.add((ViaggioPerGruppi) viaggi.get(i));
      	}
    }
    return viaggiGiorni;
  }
}