using System;
using Test;


namespace Test {

	public class Persona {
		string nome;
		string cognome;

		public Persona(string nome, string cognome) {
			this.nome = nome;
			this.cognome = cognome;
		}

		public void print(){
			Console.WriteLine("Ciao, sono "+nome+ " "+cognome);
		}
	}
	
}