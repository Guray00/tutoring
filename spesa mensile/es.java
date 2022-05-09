import java.util.Scanner;

public class es{

	public static void main(String[] args){

    Scanner scanner = new Scanner(System.in);
    
    // quante categorie vuoi inserire?
    System.out.print("Quante categorie vuoi inserire? ");
    int n_cat = scanner.nextInt();

    // creare un vettore di stringhe (per i nomi)
    String vetnomi []   = new String[10];

    // creare un vettore di float (per i prezzi)
    float  vetprezzi [] = new float [10];
     
    // per ogni categoria
    for(int i=0; i<n_cat; i++){

      System.out.print("\nInserire il nome: ");
      String nome = scanner.next();
      
      System.out.print("Inserire prezzo: ");
      float prezzo = scanner.nextFloat();
      
      vetnomi[i]   = nome;
      vetprezzi[i] = prezzo;
   }

  // inserire importo mensile
  System.out.print("\n\nimporto mensile: ");
  float imp_mens = scanner.nextInt();


  int scelta;
  // gestire la scelta dell'utente
  do {

    // mostro il menu
    System.out.println("\nSeleziona dal menu:");
    System.out.println("1) Visualizzazione categorie spesa con relativi importi;");
    System.out.println("2) Inserimento spesa in base alla categoria;");
    System.out.println("3) uscita dal programma;\n");

    // ti chiedo quale scelta vuoi fare
    System.out.print("Seleziona: ");
    scelta = scanner.nextInt();

    // adesso sappiamo cosa dobbiamo fare
    if(scelta == 1){

      // scorrere tutto il vettore di nomi e tutto il vettore di prezzi
      for (int i = 0; i < n_cat; i++){
        // devo stampare il nome
        System.out.println("> categoria: " + vetnomi[i]);
        
        // devo stampare il prezzo 
        System.out.println("> prezzo: " + vetprezzi[i]);
      }
      
    }

    else if (scelta == 2){

      
      // mostriamo tutto fino a quando l'importo è maggiore
      while(imp_mens > 0){
        System.out.println("\n> Hai ancora a disposizione " + imp_mens + " euro");
        System.out.println("Categorie: ");

        // mostre le categorie e i prezzi
        for (int i = 0; i < n_cat; i++){
          System.out.println(i+") "+vetnomi[i]+": " + vetprezzi[i]);
        }

        // salvo in s la categoria che voglio pagare
        System.out.print("\nSeleziona: ");
        int s = scanner.nextInt();

        // aggiorno il prezzo disponibile "considerando pagata"
        // la categoria selezionata
        imp_mens = imp_mens - vetprezzi[s];
      }

      System.out.println("Hai finito tutti i soldi, ritorno al menu.");
    }
    
  // quando inserisco scelta >= 3 termina  
  } while(scelta < 3);
	
    
  }
}