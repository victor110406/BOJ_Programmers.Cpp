using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();

        if (a[0] == a[1] && a[1] == a[2])
        {
            Console.WriteLine("*");
        }
        else if (a[0] == a[1])
        {
            Console.WriteLine("C");
        }
        else if (a[1] == a[2])
        {
            Console.WriteLine("A");
        }
        else if (a[0] == a[2])
        {
            Console.WriteLine("B");
        }
    }
}