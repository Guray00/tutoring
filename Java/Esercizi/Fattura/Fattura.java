
import java.time.*;

public class Fattura {

	private int numeroFattura;
	private LocalDate dataFattura;
	private Cliente cliente;
	private int importo;

	public int getNumeroFattura() {
		return numeroFattura;
	}

	public void setNumeroFattura(int numeroFattura) {
		this.numeroFattura = numeroFattura;
	}

	public LocalDate getDataFattura() {
		return dataFattura;
	}

	public void setDataFattura(LocalDate dataFattura) {
		this.dataFattura = dataFattura;
	}

	public Cliente getCliente() {
		return cliente;
	}

	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}

	public int getImporto() {
		return importo;
	}

	public void setImporto(int importo) {
		this.importo = importo;
	}

	@Override
	public String toString() {
		return "Fattura [numeroFattura=" + numeroFattura + ", dataFattura=" + dataFattura + ", cliente=" + cliente
				+ ", importo=" + importo + "]";
	}

}
