public class BagaglioStiva extends Bagaglio{

	public float pesoEccedente(){
		if (peso > 25){
			return peso - 25;
		}

		return 0;
	}

	public float tariffaSupplementare(){
		return 8.5 * pesoEccedente();
	}
}