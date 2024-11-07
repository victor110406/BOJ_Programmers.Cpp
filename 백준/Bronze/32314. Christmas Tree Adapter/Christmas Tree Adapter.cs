using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            string[] b = Console.ReadLine().Split();

            if (a <= int.Parse(b[0]) / int.Parse(b[1]))
            {
                Console.WriteLine(1);
            }
            else
            {
                Console.WriteLine(0);
            }

        }
    }
}