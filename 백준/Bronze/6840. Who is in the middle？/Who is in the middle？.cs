using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            int c = int.Parse(Console.ReadLine());

            int[] d = { a, b, c };
            Array.Sort(d);

            Console.WriteLine(d[1]);
        }
    }
}