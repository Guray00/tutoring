import java.io.*;

/*
==========
Pescare: trote, carpe
trote >  500g => 20%

1) Costanti:
    - lo sconto => 20%
    - il peso (delle trote) => 500g

2) Deve funzionare per più clienti

5)
=> per le trote, chiedere quante sono e poi il peso singolarmente
=> per le carpe, chiedere direttamente il peso totale

- prezzo_totale_trote
- prezzo_totale_carpe
- numero_trote
*/


public class es{

	public static void main(String[] args){

    // 1) 
    final float sconto      = 0.20f; // sconto
    final int costante_peso = 500; // peso da cui fare lo sconto
    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));

    // variabili per ricordarci il prezzo delle trote e delle carpe
    float prezzo_totale_trote = 0;
    float prezzo_totale_carpe = 0;
    int   numero_trote;
    
    // prova a eseguire il codice...
    try {
      float pkt, pkc;
      String str_appo;
      
      // 3)
      System.out.print("Inserire il prezzo al kl delle trote: ");
      str_appo = input.readLine();
      pkt = Float.parseFloat(str_appo);


      System.out.print("Inserire il prezzo al kl delle carpe: ");
      str_appo = input.readLine();
      pkc = Float.parseFloat(str_appo);

      // 4)
      boolean clienti;
      do{
        
        System.out.print("E' presente un nuovo cliente? ");
        str_appo = input.readLine();

        if (str_appo.equals("si")){
          clienti = true;

          // e' un nuovo cliente, quindi resettiamo lo scontrino!
          prezzo_totale_carpe = 0;
          prezzo_totale_trote = 0;
          
          // chiediamo le informazioni del punto 5  
          System.out.print("Quante trote vuoi comprare? ");
          str_appo = input.readLine();

          numero_trote = Integer.parseInt(str_appo);

          // scatola in cui salvo il prezzo della singola trota
          int peso_trota;
          int peso_carpe;

          // devo chiederti da 0 fino a "numero_trote" di inserire il prezzo della trota
          for(int i = 0; i < numero_trote; i=i+1){

            // prendo il peso di una singola trota
            System.out.print("Quanto pesa la trota? ");
            str_appo = input.readLine();
            peso_trota = Integer.parseInt(str_appo);
            float prezzo;

            // intero => senza virgola 500/1000 => 0.5 => 0
            
            // valutiamo se fare lo sconto
            if(peso_trota > costante_peso){
              // se è vero facciamo lo sconto
              prezzo = ( (float) peso_trota/1000)*pkt - ((float)peso_trota/1000)*pkt*sconto; 
            }

            // in tutti gli altri casi... se non ho sconto...
            else {
              prezzo = ( (float) peso_trota/1000)*pkt;
            }

            // il prezzo totale delle trote è pari alla somma del prezzo di 
            // ogni singola trota
            prezzo_totale_trote = prezzo_totale_trote + prezzo;
          }

          // prezzo totale delle carpe
          System.out.print("Quanti grammi di carpe vuoi comprare? ");
          str_appo = input.readLine();
          peso_carpe = Integer.parseInt(str_appo);
          prezzo_totale_carpe = ( (float) peso_carpe/1000)*pkc;

          System.out.println("Prezzo totale delle trote e': "+prezzo_totale_trote);
          System.out.println("Prezzo totale delle carpe e': "+prezzo_totale_carpe);
         } 

          else {
            clienti = false;
          }


        
      }  

        
      while(clienti == true);      
    }

    // in caso di errore...
    catch(Exception exc){
      System.out.println("Errore rilevato!");
    }
    
   
    
	}
}