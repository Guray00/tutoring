public class ContrattoTelefonico {
	private String nome;
	private int credito;
  
	public ContrattoTelefonico() {
		nome = "";
		credito = 0;
	}
  
	public ContrattoTelefonico(String nome, int credito) {
		this.nome = nome;
		this.credito = credito;
	}
  
	public void setNome(String nome) {
		this.nome = nome;
	}
  
	public void setCredito(int credito) {
		this.credito = credito;
	}
  
	public String getNome() {
		return nome;
	}
  
	public int getCredito() {
		return credito;
	}
  
	public int ScalaCredito(int scala) {
		credito = credito - scala;
		return credito;
	}
  
	@Override
	public String toString() {
		String str = "Credito: " + credito+"\n";
		return str;
	}
}