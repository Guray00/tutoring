import java.io.*;

public class es{

  // implementare una funzione che consenta di calcolare
  // la massa residua avendo a dispozione:
  // - la massa inziale
  // - il decadimento annuale (costante)
  // - il numero di anni
  public static int massaResidua(int mas, int dec, int ann){        
    // per ogni anno che va da 0 a anni 
    for(int i=0; i<ann; i++){
      // devo levare dalla massa la costante per ann anni
      mas = mas - dec;
    }

    // verifico se il valore della massa è diventato minore di zero,
    // in tal caso non potendo esistere massa negativa lo riporto a zero
    if(mas < 0){
      mas = 0;
    }    

    // restituiamo indietro il valore
    return mas;
  }
  
  public static int anniNecessari(int mas, int dec){

    // contatore di anni
    int anni = 0;
    
    while(mas>0){
      mas = mas-dec;
      anni++;
    }
    
    return anni;
  }

  
  public static void main(String[] args){

    // questa serve per fare input
    InputStreamReader input = new InputStreamReader(System.in);
    BufferedReader tastiera = new BufferedReader(input);

    try {
        int mas, dec, ann, sup, app;

        // prendiamo in input la massa
        System.out.print("Inserisci la massa iniziale: ");
        mas=Integer.parseInt(tastiera.readLine());

        // prendo in input il decadimento
        System.out.print("Inserisci il decadimento annuale: ");
        dec=Integer.parseInt(tastiera.readLine());
      
        System.out.print("Inserisci gli anni passati: ");
        ann=Integer.parseInt(tastiera.readLine());

        // richiamo la funzione per avere il risultato
        sup = massaResidua(mas, dec, ann);
        app = anniNecessari(mas, dec);
        System.out.println("\nIl risultato è: " + sup);
        System.out.println("Anni necessari: " + app);
    }

    catch(Exception e){
      System.out.println(e); 
    }
    
	}
}