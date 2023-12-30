public class es{

	public static void main(String[] args){

    StanzaHotel s1 = new StanzaHotel("s1p1", 1, "matrimoniale", 2, 40.0);
    StanzaHotel s2 = new StanzaHotel("s2p1", 1, "singola", 2, 18.50);
    StanzaHotel s3 = new StanzaHotel("s1p2", 2, "familiare", 4, 70.50);

    s1.checkIn();
    s2.checkIn();
    s3.checkIn();

    // aggiungo servizi
    s1.addServizio(12);
    s1.addServizio(60);
    s3.addServizio(5);

    // aggiungo giorni
    s1.initGiorno();
    s1.initGiorno();
    s2.initGiorno();

    // checkout
    double c1 = s1.checkOut();
    double c2 = s2.checkOut();
    double c3 = s3.checkOut();

    System.out.println("Totale primo piano: "   + (c1+c2));
    System.out.println("Totale secondo piano: " + c3);
	}
}