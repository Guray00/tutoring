public class es {

	public static void main(String[] args) {
		ContrattoTelefonico ct = new ContrattoTelefonico("Antonio", 100);
		ContrattoTelefonicoCointestato cc = new ContrattoTelefonicoCointestato("Pandolfo", "Antonio", 100);
		ct.ScalaCredito(5);
    cc.ScalaCredito(30);
		// System.out.println(ct);
		System.out.println(cc);
	}

}