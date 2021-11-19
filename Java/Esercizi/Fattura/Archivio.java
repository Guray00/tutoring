
import java.util.ArrayList;



public class Archivio {
	ArrayList<Fattura> list = new ArrayList<Fattura>();
	ArrayList<Cliente> listaclienti = new ArrayList<Cliente>();
    
	boolean presente=false;

	public void registraf(Fattura f) {
		list.add(f);
	}

	public ArrayList<Fattura> getListf() {
		return list;
	}

	public void registrac(Cliente c) {
		for (Cliente obj : listaclienti) { 
			if(c.getCodice().equals(obj.getCodice()) ) {
				presente=true;
			}
			else
				presente=false;
				
		}
		if(presente == false)
			listaclienti.add(c);
	}

	public ArrayList<Cliente> getListc() {
		return listaclienti;
	}

    public void stampaFatture(){
        for(Fattura obj : list) {
			System.out.println(obj.toString());
		}
    }

}
