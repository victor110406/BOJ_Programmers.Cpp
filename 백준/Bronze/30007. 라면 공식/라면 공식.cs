using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            for (int i = 0; i < a; i++)
            {
                string[] b = Console.ReadLine().Split(' ');
                Console.WriteLine(int.Parse(b[0]) * (int.Parse(b[2]) - 1) + int.Parse(b[1]));
            }
        }
    }
}