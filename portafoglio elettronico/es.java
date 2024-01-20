public class es {

  public static void main(String[] args) {

    // crea un portafoglio elettronico
    PortafoglioElettronico portafoglio = new PortafoglioElettronico("LcYHfy", 100);


    // pagamento 1 - non attivo
    boolean esito = portafoglio.acquista("LcYHfy", 11);
    if (esito){
      System.out.println("Pagamento 1 riuscito");
    }
    else {
      System.out.println("Pagamento 1  non riuscito");
    }

    portafoglio.attiva();
    
    //pagamento 2 - riuscito
    boolean esito2 = portafoglio.acquista("LcYHfy",40);
    if (esito2) {
      System.out.println("Pagamento 2 riuscito");
    }else {
      System.out.println("Pagamento 2  non riuscito");
    }
    
    // pagamento 3 - pin errato
    boolean esito3 = portafoglio.acquista("Lcy",1);
    if (esito3) {
      System.out.println("Pagamento 3 riuscito");
    } else {
      System.out.println("Pagamento 3 non riuscito");
    }

    System.out.println("Credito residuo: " + portafoglio.getCreditoResiduo());
    
    boolean esito4 = portafoglio.verificaAcquisto(1,1);
    System.out.println("E' possibile fare l'acquisto?: " + esito4);
    
    boolean esito5 = portafoglio.verificaAcquisto(1000000, 3);
    System.out.println("E' possibile fare l'acquisto?: " + esito5);
    portafoglio.ricarica(17);
    System.out.println("Credito residuo: " + portafoglio.getCreditoResiduo());

  }

}
