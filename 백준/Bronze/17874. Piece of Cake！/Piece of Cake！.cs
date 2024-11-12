using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine(Math.Max(a[1], a[0] - a[1]) * Math.Max(a[2], a[0] - a[2]) * 4);
    }
}