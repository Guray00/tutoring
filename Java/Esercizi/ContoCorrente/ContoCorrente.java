import java.util.ArrayList;
import java.time.LocalDate;

public class ContoCorrente {
	public ArrayList<Movimento> transazioni;

	// costruttore del conto corrente
	public ContoCorrente(){
		transazioni = new ArrayList<Movimento>();
	}

	public void deposita(double importo, LocalDate data){
		Movimento tmp = new Movimento(importo, data, "deposito");
		transazioni.add(tmp);
	}

	public boolean prelievo(double importo, LocalDate data){	
		// saldo >= importo
		if (this.getSaldo() >= importo){
			Movimento tmp = new Movimento(importo, data, "prelievo");
			transazioni.add(tmp);

			return true;
		}

		else {
			System.out.println("Mi dispiace, prelievo di "+ importo + " non consentito in quanto il saldo è di solo " + getSaldo());

			return false;
		}

	}

	public void elencoMovimenti(){
		for (Movimento m : transazioni){
			m.print();
		}
	}


	public double getSaldo(){

		double saldo = 0;
		for(Movimento m : transazioni){
			switch(m.tipologia){
				case "deposito":
					saldo += m.importo;
					break;
				case "prelievo":
					saldo -= m.importo;
					break;
			}
		}

		return saldo;
	}


}
