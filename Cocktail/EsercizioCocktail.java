import java.awt.Component;
import java.util.ArrayList;

public class EsercizioCocktail{


	public static void main(String[] Args){
		// creazione componenti
		Componente c1 = new Componente("a", 2, 3);
		Componente c2 = new Componente("b", 2, 1);
		Componente c3 = new Componente("b", 1, 2);

		// creazione lista di componenti
		ArrayList<Componente> comp1 = new ArrayList<Componente>();
		ArrayList<Componente> comp2 = new ArrayList<Componente>();
		comp1.add(c1); comp1.add(c2);
		comp2.add(c2); comp2.add(c3);

		// creazione cocktail
		CocktailAlcolico co1 = new CocktailAlcolico("A", comp1, 2);
		CocktailAlcolico co2 = new CocktailAlcolico("B", comp2, 3);

		// Creazione bar
		ArrayList<Cocktail> lc = new ArrayList<Cocktail>();
		lc.add(co1); lc.add(co2);
		CocktailBar bar = new CocktailBar("Bar", lc);

		System.out.println("Test metodo 5");
		System.out.println(bar.listaCocktailConComponente(c2).toString());

	}


}