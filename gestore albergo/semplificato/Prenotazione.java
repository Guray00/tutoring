 //classe prenotazione -> data_inizio (int), data_fine (int), nome del cliente e camera oggetto della prenotazione

public class Prenotazione{
  private int data_inizio;
  private int data_fine;
  private String nomeCliente;
  private Camera camera;


	// costruttore di default
  public Prenotazione(){
    this.data_inizio = -1;
    this.data_fine = -1;
    this.nomeCliente = "null";
    this.camera = null;
  }


	// costruttore con i parametri
  public Prenotazione(int data_inizio, int data_fine, String nomeCliente, Camera camera){
    this.data_inizio = data_inizio; 
    this.data_fine = data_fine;
    this.nomeCliente = nomeCliente;
    this.camera = camera;
		camera.setOccupato(true);
  }


	// get ...
	public int getDataInizio(){
		return data_inizio;
	}
	
	// set ...
	public void setDataInizio(int d){
		this.data_inizio = d;
	}

  public int getDataFine(){
    return data_fine;
  }

  public void setDataFine(int d_f){
    this.data_fine = d_f;
  }

  public String getNomeCliente(){
    return nomeCliente;
  }

  public void setNomeCliente(String nome){
    this.nomeCliente = nome; 
  }

  public Camera getCamera(){
    return camera;
  }

  public void setCamera(Camera c){
    this.camera = c;
  }
}