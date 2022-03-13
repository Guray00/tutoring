using System;

public class MyProgram
{
    public static void Main(string[] args)
    {
        int @base, esponente, risultato, i;
        
        Console.WriteLine("Inserisci la base");
        @base = (int) readValue();
        Console.WriteLine("Inserisci l'esponente");
        esponente = (int) readValue();
        
        // risultato vale 1 in modo da non alterare il valore
        risultato = 1;
        for (i = 1; i <= esponente; i++)
        {
            risultato = risultato * @base;
        }
        Console.WriteLine("Il risultato e': " + risultato);
    }
    
    // .NET can only read single characters or entire lines from the console.
    // The following function safely reads a double value.
    private static double readValue()
    {
        double result;
        while (!double.TryParse(Console.ReadLine(), out result));
        return result;
    }
}
