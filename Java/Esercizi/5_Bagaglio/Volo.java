import java.util.ArrayList;

public class Volo {
    private String codice;
    private ArrayList<Bagaglio> bagagli;

    public Volo(){
        codice = "";
        bagagli = new ArrayList<Bagaglio>();
    }

    public Volo(String codice, ArrayList<Bagaglio> bagagli){
        this.codice = codice;
        this.bagagli = bagagli;
    }

    public Volo(Volo c){
        this.codice = c.codice;
        this.bagagli = c.bagagli;
    }

    public void setCodice(String codice) {
        this.codice = codice;
    }

    public String getCodice() {
        return codice;
    }

    public void setBagagli(ArrayList<Bagaglio> bagagli) {
        this.bagagli = bagagli;
    }

    public ArrayList<Bagaglio> getBagagli() {
        return bagagli;
    }

    // metodo 1
    public float importoSupplementi(){
        float tot = 0;
        for(int i = 0; i < bagagli.size(); i++){
            tot = tot + bagagli.get(i).eccedenza();
        }
        return tot;
    }

    // metodo 2
    public int numeroBagagli(boolean isEccedente){
        int tot = 0;
        for(int i = 0; i < bagagli.size(); i++){
            // vero vero   ==> tot++
            // falso falso ==> tot++
            // falso vero  ==> nulla
            // vero  falso ==> nulla


            // se stiamo contanto gli eccedenti ed è eccedente oppure se non stiamo contando gli eccedenti e il bagaglio non è eccedente
            if (  (isEccedente && bagagli.get(i).isEccedente()) || (!isEccedente && !bagagli.get(i).isEccedente()) )
                tot = tot + 1; // contiamo i supplementi
        }

        return tot;
    }

    public Bagaglio[] eccedenti(){
        Bagaglio[] tmp = new Bagaglio[numeroBagagli(true)];
        int j = 0;

        for(int i = 0; i < bagagli.size(); i++){
            if(bagagli.get(i).isEccedente()){
                tmp[j] = bagagli.get(i);
                j++;
            }
        }
        return tmp;
    }

    // metodo 4
    public ArrayList<Bagaglio> pesoCompreso(float pesoMin, float pesoMax){
        ArrayList<Bagaglio> tmp = new ArrayList<Bagaglio>();
        for(int i = 0; i < bagagli.size(); i++){
            if(bagagli.get(i).getPeso() >= pesoMin && bagagli.get(i).getPeso() <= pesoMax){
                tmp.add(bagagli.get(i));
            }
        }
        return tmp;
    }

    // metodo 5
    public void stampaPasseggiero(String name){

        ArrayList<Bagaglio> tmp = new ArrayList<Bagaglio>();

        for (int i = 0; i < bagagli.size(); i++){
            if (bagagli.get(i).getNomePasseggero().equals(name)){
                tmp.add(bagagli.get(i));
            }
        }

        if (tmp.size == 0) System.out.println("Nessun passeggero trovato con quel nome");

        else{
            System.out.println("Nome passeggero: " + tmp.get(0).getNomePasseggero());
            System.out.println();
            System.out.println("Bagagli:");
            System.out.println();

            for (int i = 0; i < tmp.size(); i++ ){
                System.out.println("Bagaglio" + i + " peso: " + tmp.get(i).getPeso() + " Kg");
            }
        }
    }

}

/*
Metodo 1
Metodo che calcola l'importo totale dei supplementi (totale delle tasse dei b
        gagli che
        superano i 25 kg)

Metodo 2
numeroBagagli (boolean isEccedente): che restituisca il numero di bagagli eccedenti (se riceve in input il
valore true) oppure dei bagagli non eccedenti (se riceve in input
        il valore false).

Metodo 3
Metodo che restituisce un array dei bagagli con peso eccedente

Metodo 4
Metodo che riceve in input due valori rappresentanti il peso minimo e il peso massimo di un bagaglio e
restituisce un elenco con i bagagli con il peso compreso tra i due valori (valori
        limite inclusi).
Metodo 5
Metodo che, ricevuto in input il nome di un passeggero, stampa a schermo i suoi bagagli con il relativo
*
* */