/*

*/

import java.util.*;
import java.io.*;


public class es{


	public static void main(String[] args){

    // creiamo un messaggio
    Messaggio m1 = new Messaggio("Ciao Luigi!", "Mario", "Luigi", "04-03-2001");
    Messaggio m2 = new Messaggio("Ciao Mario, tutto bene?", "Luigi", "Mario", "04-03-2001");

    // creiamo un gestore di messaggi
    GestoreMessaggi gm = new GestoreMessaggi(m1);

    // proviamo a cancellare i messaggi
    gm.clearMessaggi();
    gm.addMessaggio(m2);

    // stampiamo tutti i messaggi contenuti
    gm.print();

    System.out.println("Sono presenti "+ gm.conteggio()+" messaggi");
	}
}