import java.io.*;  


public class es{

	public static void main(String[] args){

    // stiamo creando un "oggetto" che ci consenta di 
    // chiedere all'utente di inserire dei dati
    // (stiamo spiegando al java come chiedere in input)
    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));

    // prova a fare questo....
    try {
      // dichiarazione delle variabili => creiamo le variabili
  		int base, altezza, area; 
  
      // Chiedere di inserire la base
      System.out.print("Inserisci la base: ");
  
      // dobbiamo inserire la base facendo input
      //input.readLine() => legge in input fino a che non premiamo invio
      // readLine() => ti legge una stringa, quindi una frase
      // ma a me serve un numero!!!! (quindi un int)

      // leggo a schermo quello che scrive l'utente
      String str_appo;
      str_appo = input.readLine();

      // converto la stringa str_appo in un intero
      base = Integer.parseInt(str_appo);

      // chiediamo di inserire l'altezza
      System.out.print("Inserisci l'altezza: ");

      // inseriamo l'altezza come stringa (frase)
      str_appo = input.readLine();

      // dobbiamo convertire di nuovo l'altezza in un numero
      altezza = Integer.parseInt(str_appo);

      // faccio il calcolo
      area = base*altezza;

      // mostriamo a schermo il risultato
      System.out.print("L'area risultante è "+ area);
      
   }

    // se sbaglio, errore
    catch (Exception exc){
      System.out.println("errore...");
    }
  
      
	  
  }
}