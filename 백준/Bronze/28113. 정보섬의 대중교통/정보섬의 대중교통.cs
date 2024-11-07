using System;
using System.Linq;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
            if (a[2] >= a[0])
            {
                if (a[2] == a[1])
                {
                    Console.WriteLine("Anything");
                }
                else if (a[2] > a[1])
                {
                    Console.WriteLine("Bus");
                }
                else
                {
                    Console.WriteLine("Subway");
                }
            }
            else
            {
                Console.WriteLine("Bus");
            }
        }
    }
}