using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] a = Console.ReadLine().Split();
            if (double.Parse(a[0]) >= double.Parse(a[1]) / 2) 
            { 
                Console.WriteLine("E");
            }
            else 
            { 
                Console.WriteLine("H"); 
            }
        }
    }
}