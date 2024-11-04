using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string input1 = Console.ReadLine();
            if (int.Parse(input) < int.Parse(input1)) { Console.WriteLine(-1); }
            else if (int.Parse(input) == int.Parse(input1)) { Console.WriteLine(0); }
            else if (int.Parse(input) > int.Parse(input1)) { Console.WriteLine(1); }
        }
    }
}
