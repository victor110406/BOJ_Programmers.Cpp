using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] a = Console.ReadLine().Split();
            Console.WriteLine((double.Parse(a[0]) * double.Parse(a[1]) / 2.0).ToString("0.0"));
            
        }
    }
}