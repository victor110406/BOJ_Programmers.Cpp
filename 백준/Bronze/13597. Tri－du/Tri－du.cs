using System;

namespace Programmers
{
    class Program
    {
        static void Main()
        {
            string[] a = Console.ReadLine().Split(' ');
            Console.WriteLine(Math.Max(int.Parse(a[0]), int.Parse(a[1])));
        }
    }
}