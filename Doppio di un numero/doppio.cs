using System;

public class MyProgram
{
    public static void Main(string[] args)
    {
        int numero, doppio;
        
        Console.WriteLine("Inserisci un numero");
        numero = (int) readValue();
        doppio = 2 * numero;
        Console.WriteLine("Il doppio del numero e' " + doppio);
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
