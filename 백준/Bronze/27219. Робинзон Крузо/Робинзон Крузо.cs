using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            for (int i = 0; i < a / 5; i++)
            {
                Console.Write("V");
            }

            for (int i = 0; i < a % 5; i++)
            {
                Console.Write("I");
            }
        }
    }
}
