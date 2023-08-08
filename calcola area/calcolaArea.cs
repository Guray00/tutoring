using System;

public class MyProgram
{
    public static void Main(string[] args)
    {
        int @base, altezza, area;
        
        Console.WriteLine("Inserisci la base");
        @base = (int) readValue();
        Console.WriteLine("Inserisci l'altezza");
        altezza = (int) readValue();
        area = @base * altezza;
        Console.WriteLine("L'area del rettangolo vale " + area);
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
