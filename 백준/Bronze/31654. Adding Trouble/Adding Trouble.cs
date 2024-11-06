using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] a = Console.ReadLine().Split();
            if (int.Parse(a[0]) + int.Parse(a[1]) == int.Parse(a[2]))
            {
                Console.WriteLine("correct!");
            }
            else
            {
                Console.WriteLine("wrong!");
            }
        }
    }
}
