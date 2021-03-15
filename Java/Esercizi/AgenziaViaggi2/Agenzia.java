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
				  tmp.add(j, viaggi.get(i));
			  }
		  }
      }
    }

	return tmp;
  }
}