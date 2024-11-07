using System;
using System.Linq;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] a = Console.ReadLine().Split();
            bool onlyZeroAndOne = a.All(n => n == "0" || n == "1");
            Console.WriteLine(onlyZeroAndOne ? "S" : "F");
        }
    }
}