using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            string b = Console.ReadLine();
            switch (b) 
            {
                case "NLCS":
                    Console.WriteLine("North London Collegiate School");
                    break;
                case "BHA":
                    Console.WriteLine("Branksome Hall Asia");
                    break;
                case "KIS":
                    Console.WriteLine("Korea International School");
                    break;
                case "SJA":
                    Console.WriteLine("St. Johnsbury Academy");
                    break;
            }
        }
    }
}