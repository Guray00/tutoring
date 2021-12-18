
import java.util.ArrayList;

public class Cliente {
	private String denominazione;
	private String codiceCliente;
	private String partitaIva;
	private String indirizzo;

	//public Cliente(String denominazione, int codiceCliente, int partitaIva, String indirizzo) {
	//	this.denominazione = denominazione;
	//	this.codiceCliente = codiceCliente;
	//	this.partitaIva = partitaIva;
	//	this.indirizzo = indirizzo;
	// }
	
	

	public String getCodice() {
		return codiceCliente;
	}

	public String getDenominazione() {
		return denominazione;
	}

	public String getIndirizzo() {
		return indirizzo;
	}

	public String getPartitaIva() {
		return partitaIva;
	}
	
	public void  setCodice(String codice) {
		codiceCliente = codice;
	}

	public void setDenominazione(String denom) {
		denominazione = denom;
	}

	public void setIndirizzo(String indirizzo) {
		this.indirizzo = indirizzo;
	}

	public void setPartitaIva(String piva) {
		partitaIva = piva;
	}

	@Override
	public String toString() {
		return "Cliente [denominazione=" + denominazione + ", codiceCliente=" + codiceCliente + ", partitaIva="
				+ partitaIva + ", indirizzo=" + indirizzo + "]";
	}

	

	
}
