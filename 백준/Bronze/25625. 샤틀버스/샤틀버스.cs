using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        if (a[0] > a[1]) { Console.WriteLine(a[0] + a[1]); }
        else if (a[0] < a[1]) { Console.WriteLine(a[1] - a[0]); }
    }
}