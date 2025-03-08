using System;
using System.Collections.Generic;
using System.Linq;

namespace Hello_world
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] a = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            int[] b = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            int[] c = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();

            Array.Sort(b);
            Array.Sort(c);

            Console.WriteLine(b[b.Length - 1] + c[c.Length - 1]);
        }
    }
}

