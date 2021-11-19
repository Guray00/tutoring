public class main{
    //	ESERCITAZIONE IN AUTONOMIA
    //	Definire una classe GestoreMessaggi che memorizza al 
    //  suo interno una lista di messaggi
    //	Deve essere possibile istanziare l'oggetto usando il 
    //  costruttore di default oppure registrando un messaggio 
    //	oppure registrando un elenco di messaggi
    //	
    //	La classe deve esporre le operazioni per
    //	- aggiungere un nuovo messaggio
    //	- pulire l'elenco dei messaggi
    //	- restituire il conteggio dei messaggi


	public static void main(String[] args){


        Messaggio m0 = new Messaggio("marco", "ciao Andrea!");
        Messaggio m1 = new Messaggio("m1", "contenuto1");
        Messaggio m2 = new Messaggio("m2", "contenuto2");
        Messaggio m3 = new Messaggio("m3", "contenuto3");

        //ArrayList<Messaggio> a = new ArrayList<Messaggio>();
        //a.add(m);
		
        GestoreMessaggi gm = new GestoreMessaggi(m0);

        System.out.println("I messaggi sono: " + gm.contaMessaggi());
        gm.nuovoMessaggio(m1);
        gm.pulisciMessaggi();
        System.out.println("Ora i messaggi ora: " + gm.contaMessaggi());
        gm.nuovoMessaggio(m2);
        gm.nuovoMessaggio(m3);
        gm.stampaMessaggi();
        //GestoreMessaggi gm2 = new GestoreMessaggi(m);
        //GestoreMessaggi gm3 = new GestoreMessaggi(a);


	}
}