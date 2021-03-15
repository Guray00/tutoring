public class BagaglioMano extends Bagaglio{

	public float pesoEccedente(){
		if (peso > 8){
			return peso - 8;
		}

		return 0;
	}

	public float tariffaSupplementare(){
		return 5 * pesoEccedente();
	}
	
}