using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            if (a % 10 == a / 10)
            {
                Console.Write(1);
            }
            else
            {
                Console.Write(0);
            }
        }
    }
}
