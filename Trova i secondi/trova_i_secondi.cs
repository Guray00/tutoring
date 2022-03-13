using System;

public class MyProgram
{
    public static void Main(string[] args)
    {
        // Scrivere l'algoritmo che, ricevuto in input un orario attraverso tre le sue tre componenti (ore, minuti e secondi), ne calcoli il valore totale in secondi.
        int minuti, ore, secondi;
        
        Console.WriteLine("Inserire ore");
        ore = (int) readValue();
        Console.WriteLine("Inserire minuti");
        minuti = (int) readValue();
        Console.WriteLine("Inserire secondi");
        secondi = (int) readValue();
        secondi = secondi + 60 * minuti + ore * 3600;
        Console.WriteLine("Abbiamo in totale in secondi " + secondi);
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
