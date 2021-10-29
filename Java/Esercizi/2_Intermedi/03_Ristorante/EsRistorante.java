import java.util.ArrayList;

/*
TESTO E SPIEGAZIONE: https://docs.google.com/document/d/1J-Hgpwmb9ggbqJgb-V12uR6Sz8WIIbO0p-S0nxVUBsU/edit#heading=h.tbk9p9ny6zkg
*/


public class EsRistorante{

    /*
    *  Ingrediente
    *  --> descrizione: String
    *  --> quantita: Int
    *  --> Prezzo: Int
    *
    *  Piatto
    *  --> nome: String
    *  --> tipo [primo, secondo, dessert]: enum [primo, secondo, dessert]
    *  --> lista di ingredienti
    *
    * Ristorante
    * --> elenco di piatti: ArrayList
    * --> elenco di ordini: ArrayList
    */


    public static void main (String[] args){
        // creiamo gli ingredienti
        Ingredienti pasta       = new Ingredienti("pasta",     1, 1);
        Ingredienti guanciale   = new Ingredienti("guanciale", 2, 2);
        Ingredienti uovo        = new Ingredienti("uovo",      2, 2);
        Ingredienti pesto       = new Ingredienti("pesto",     3, 3);
        Ingredienti sugo        = new Ingredienti("Sugo",      4, 4);


        ArrayList<Ingredienti> ingredientiCarbonara = new ArrayList<Ingredienti>();
        ingredientiCarbonara.add(pasta);
        ingredientiCarbonara.add(guanciale);
        ingredientiCarbonara.add(uovo);

        ArrayList<Ingredienti> ingredientiSugo = new ArrayList<Ingredienti>();
        ingredientiSugo.add(pasta);
        ingredientiSugo.add(sugo);

        // creazioni di piatti
        Piatto carbonara    = new Piatto ("carbonara", Piatto.TipoDiPiatto.primo, ingredientiCarbonara);
        Piatto pastaAlPesto = new Piatto ("Pasta al pesto", Piatto.TipoDiPiatto.primo);
        Piatto pastaAlSugo  = new Piatto ("Pasta al sugo", Piatto.TipoDiPiatto.primo, ingredientiSugo);


        pastaAlPesto.addIngrediente(pasta);
        pastaAlPesto.addIngrediente(pesto);
        carbonara.stampa();
        pastaAlPesto.stampa();

        carbonara.removeIngrediente(guanciale);
        carbonara.addIngrediente(pesto);

        // seconda stampa con la lista modificata
        System.out.println("\n================\n");
        carbonara.stampa();

        ArrayList<Piatto> menu = new ArrayList<Piatto>();
        menu.add(carbonara);
        menu.add(pastaAlPesto);
        menu.add(pastaAlSugo);

        Ristorante a = new Ristorante(menu, menu);

        ArrayList<Piatto> out = a.sortMenu(Piatto.TipoDiPiatto.primo);

        System.out.println("=============");
        for (int i = 0; i < out.size(); i++){
            System.out.println(out.get(i).getNome() + "\t" + out.get(i).getPrezzo());
        }
    }
}
