import java.util.ArrayList;

public class Piatto {
    /*
    *  Piatto
    *  --> nome: String
    *  --> tipo [primo, secondo, dessert]: enum [primo, secondo, dessert]
    *  --> lista di ingredienti
    */

    public enum TipoDiPiatto { primo, secondo, dessert};

    private String nome;
    private TipoDiPiatto tipo;
    private ArrayList<Ingredienti> ingr;

    public Piatto(String nome, TipoDiPiatto tipo, ArrayList ingredienti){
        this.nome = nome;
        this.tipo = tipo;
        this.ingr = ingredienti;
    }

    public Piatto(String nome, TipoDiPiatto tipo){
        this.nome = nome;
        this.tipo = tipo;
        ingr = new ArrayList<Ingredienti>();
    }

    public Piatto(Piatto c){
        this.nome = c.nome;
        this.tipo = c.tipo;
        this.ingr = c.ingr;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setTipo(TipoDiPiatto tipo) {
        this.tipo = tipo;
    }

    public String getNome() {
        return nome;
    }

    public TipoDiPiatto getTipo() {
        return tipo;
    }


    // aggiunta dell'ingrediente alla lista
    public void addIngrediente(Ingredienti i){
        ingr.add(i);
    }

    // rimozione di un ingrediente dalla lista
    public void removeIngrediente(Ingredienti ing){
        ingr.remove(ing);
    }

    public ArrayList getIngredienti(){
        return this.ingr;
    }

    public void stampa(){
        System.out.print("Piatto: "+ nome+ "\nIngredienti: [");

        for (int i = 0; i < ingr.size(); i++){
            System.out.print(ingr.get(i).getDescrizione()+" ");
        }

        System.out.println("]");
    }

    public int getPrezzo(){
        /*
        * scorriamo gli ingredienti
        * sommo il valore
        */
        int prezzoPiatto = 0;
        for(int i = 0; i < ingr.size(); i++){
            prezzoPiatto = prezzoPiatto + ingr.get(i).getPrezzo();
        }
        return prezzoPiatto;
    }
}
