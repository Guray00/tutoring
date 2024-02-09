using System;

class Program
{
    static void Main(string[] args)
    {
        Console.Write("Inserisci un numero float: ");
        float numero = float.Parse(Console.ReadLine());

        // Calcolo della parte decimale
        float decimale = numero - Math.Floor(numero);

        // Arrotonda per eccesso se la parte decimale è maggiore o uguale a 0.5
        int risultato;
        if (decimale >= 0.5)
        {
            risultato = (int)Math.Ceiling(numero);
        }
        else
        {
            risultato = (int)Math.Floor(numero);
        }

        Console.WriteLine("Numero arrotondato: " + risultato);
    }
}
