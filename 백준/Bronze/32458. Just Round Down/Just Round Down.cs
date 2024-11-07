using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            string a = Console.ReadLine();
            int intValue = (int)Math.Floor(double.Parse(a));
            Console.WriteLine(intValue);
        }
    }
}