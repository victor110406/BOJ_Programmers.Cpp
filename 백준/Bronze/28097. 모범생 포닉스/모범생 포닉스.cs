using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        int[] b = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int result = b.Sum() + (8 * (b.Length -1));
       
        Console.WriteLine((result / 24) + " " + (result % 24));
    }
}