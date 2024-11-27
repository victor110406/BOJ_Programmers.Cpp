using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        int result = 0;

        for (int i=0; i<a; i++)
        {
            int[] b = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            Console.WriteLine(b[0] - (b[1] / 7) + (b[1] / 4));
        }
    }
}