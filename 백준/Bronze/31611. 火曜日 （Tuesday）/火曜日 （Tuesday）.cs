using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            if(int.Parse(input) % 7 == 2)
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
