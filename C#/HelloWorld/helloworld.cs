
using Test;

// se mettessimo il namespace "Test" anche in questo
// file non sarebbe necessario specificare "Test" 
// con using. NB: più istruzioni using possono essere usate

public class Helloworld{

		public static void Main(string[] args){
			Persona p1 = new Persona("Mario","Rossi");
			p1.print();
		}
			
}
