using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        int b = int.Parse(Console.ReadLine());
        int c = int.Parse(Console.ReadLine());

        if (a + 2 * b + 3 * c < 10)
        {
            Console.WriteLine("sad"); 
        }
        else
        {
            Console.WriteLine("happy");
        }
        
    }
}