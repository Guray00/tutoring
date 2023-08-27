public class ContrattoTelefonicoCointestato extends ContrattoTelefonico {
	private String nome2;
  
	public ContrattoTelefonicoCointestato(){
    super();
		nome2 = "";
	}
  
	public ContrattoTelefonicoCointestato(String nome2, String nome, int credito) {
		super(nome, credito);
		this.nome2 = nome2;
	}
  
	public void setNome2(String nome2) {
		this.nome2 = nome2;
	}
  
	public String getNome2() {
		return nome2;
	}
	
	@Override
	public String toString() {
		String str = "Credito: "+ credito + "\nIntestatari: " + nome + ", " + nome2;
		return str;
	}
}