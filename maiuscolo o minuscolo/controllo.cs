using System;

public class MyProgram
{
    public static void Main(string[] args)
    {
        string c;
        
        Console.WriteLine("Inserisci un carattere");
        c = Console.ReadLine()
        if (c >= "a" && c <= "z")
        {
            Console.WriteLine("Carattere minuscolo");
        }
        else
        {
            if (c >= "A" && c <= "Z")
            {
                Console.WriteLine("Carattere maiuscolo");
            }
            else
            {
                Console.WriteLine("Non è un carattere");
            }
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
