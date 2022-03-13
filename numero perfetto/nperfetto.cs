using System;

public class MyProgram
{
    public static void Main(string[] args)
    {
        // Scrivere un algoritmo che verifichi se un numero è perfetto.
        int n, i, somma;
        
        somma = 0;
        Console.WriteLine("Inserisci il numero");
        n = (int) readValue();
        for (i = 1; i <= n - 1; i++)
        {
            if (n % i == 0)
            {
                
                // i è un divisore di n
                somma = somma + i;
            }
        }
        
        // Se la somma è uguale al numero, allora è perfetto
        if (somma == n)
        {
            Console.WriteLine("Il numero è perfetto");
        }
        else
        {
            Console.WriteLine("Il numero non è perfetto");
        }
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
