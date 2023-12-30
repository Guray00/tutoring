import java.util.ArrayList;

public class StanzaHotel{
  private String codice;
  private int piano;
  private String tipologia;
  private boolean occupata;
  private int capienza;
  private double costoDie;
  private int giorniOccupati;
  private ArrayList<Double> costoServiziAccessori;

  public StanzaHotel(String codice, int piano, String tipologia, int capienza, double costoDie){
    this.codice=codice;
    this.piano=piano;
    this.tipologia = tipologia;
    this.capienza  = capienza;
    this.costoDie  = costoDie;
    
    this.occupata = false;
    this.giorniOccupati = 0;
    costoServiziAccessori = new ArrayList<Double>();
  }

  public String getCodice()     { return codice;}
  public int    getPiano()      { return piano;}
  public String getTipologia()  { return tipologia; }
  public int    getCapienza()   { return this.capienza;}
  public double getCostoDie()   { return this.costoDie; }
  public boolean getOccupata()  { return occupata;}
  public int getGiorniOccupati(){ return this.giorniOccupati;}

  public ArrayList<Double> getCostoServiziAccessori(){
    return this.costoServiziAccessori;
  }


  public void checkIn(){
    occupata = true;
    giorniOccupati=1;
  }

  // funzione che aggiunge un giorno alla stanza
  public void initGiorno(){
    giorniOccupati++;
  }

  public void addServizio(double servizio){
    costoServiziAccessori.add(servizio);
    
  }
  public double checkOut(){

    double costo = costoDie * giorniOccupati;

    // per ogni servizio accessorio
    for(int i=0;i<costoServiziAccessori.size();i++){
      // aggiungi il prezzo del servizio
      costo=costo+costoServiziAccessori.get(i);
    }

    // resettiamo la stanza
    occupata=false;
    giorniOccupati = 0;

    // ritorniamo il costo
    return costo;
  }
  
}
