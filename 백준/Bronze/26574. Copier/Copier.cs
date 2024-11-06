using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            for (int i=0; i<a; i++)
            {
                string s = Console.ReadLine();
                Console.WriteLine(s + " " + s);
            }
        }
    }
}