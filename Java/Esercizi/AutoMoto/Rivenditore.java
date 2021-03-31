import java.util.ArrayList;

public class Rivenditore {
	private String nome;
	ArrayList<Veicolo> list;

	public Rivenditore(){
		this.nome = "";
		list = new ArrayList<Veicolo>();
	}

	public Rivenditore(String nome){
		this.nome = nome;
		list = new ArrayList<Veicolo>();
	}
	
	/*implementare un metodo ... addMezzo(...) che permetta di aggiungere indistintamente sia auto che
moto alla struttura dati*/

	public void aggiungiMezzo(Veicolo v){
			list.add(v);
	}

	/*
	mplementare un metodo ... removeMezzo(...) che permetta di rimuovere un mezzo ricevuta la sua matricola come parametro di input
	*/

  public boolean removeMezzo(String m){
    for(int i = 0; i < list.size(); i++){
      if(list.get(i).getMatricola().equals(m)){
        list.remove(i);
        return true;
      }
    }
    return false;
  }

	public String toString(){
		String tmp = "";
		for (int i = 0; i < list.size(); i++){

			tmp = tmp + list.get(i).toString()+"\n";
			
		}
		return tmp;
	}

}