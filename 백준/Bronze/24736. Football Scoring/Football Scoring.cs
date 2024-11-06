using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] a = Console.ReadLine().Split();
            string[] b = Console.ReadLine().Split();

            Console.Write(int.Parse(a[0]) * 6 + int.Parse(a[1]) * 3 + int.Parse(a[2]) * 2 + int.Parse(a[3]) + int.Parse(a[4]) * 2 + " ");
            Console.Write(int.Parse(b[0]) * 6 + int.Parse(b[1]) * 3 + int.Parse(b[2]) * 2 + int.Parse(b[3]) + int.Parse(b[4]) * 2);
        }
    }
}
