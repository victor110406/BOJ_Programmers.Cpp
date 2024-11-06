using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] a = Console.ReadLine().Split();
            string[] b = Console.ReadLine().Split();

            int maxTime = int.Parse(a[0]) * 3 + int.Parse(a[1]) * 20 + int.Parse(a[2]) * 120;
            int melTime = int.Parse(b[0]) * 3 + int.Parse(b[1]) * 20 + int.Parse(b[2]) * 120;

            if(maxTime > melTime)
            {
                Console.WriteLine("Max");
            }
            else if (maxTime < melTime)
            {
                Console.WriteLine("Mel");
            }
            else
            {
                Console.WriteLine("Draw");
            }
        }
    }
}