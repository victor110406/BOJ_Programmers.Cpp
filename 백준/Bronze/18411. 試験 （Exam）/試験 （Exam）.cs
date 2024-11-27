using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Array.Sort(a);

        Console.WriteLine(a[1] + a[2]);
    }
}