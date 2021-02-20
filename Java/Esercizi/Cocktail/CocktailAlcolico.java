public class CocktailAlcolico extends Cocktail{
	private float gradazioneAlcolica;

	public static float fattoreAlcolico = 1;

	public CocktailAlcolico(){
		super();
		this.gradazioneAlcolica = 0;
	}

	public CocktailAlcolico(String n, ArrayList<Componente> c, float gradazioneAlcolica){
		super(n, c);
		this.gradazioneAlcolica = gradazioneAlcolica;
	}

	public CocktailAlcolico(CocktailAlcolico c){
		super(c);
		this.gradazioneAlcolica = c.gradazioneAlcolica;
	}

	public void setGradazioneAlcolica(float gradazioneAlcolica){
    	this.gradazioneAlcolica = gradazioneAlcolica;
  	}

	public float getGradazioneAlcolica(){
		return this.gradazioneAlcolica;
	}

	public float getPrezzo(){
		return super.getPrezzo() + gradazioneAlcolica*fattoreAlcolico;
	}
}