using System;
using System.Linq;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            for(int i=0; i<a; i++)
            {
                string[] b = Console.ReadLine().Split(' ');
                if (String.Concat(b[0].OrderBy(c => c)) == String.Concat(b[1].OrderBy(c => c)))
                {
                    Console.WriteLine("Possible");
                }
                else
                {
                    Console.WriteLine("Impossible");
                }
            }
        }
    }
}