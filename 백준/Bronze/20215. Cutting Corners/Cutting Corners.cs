using System;
using System.Linq;

class Program
{
    static void Main()
    {
        double diagonalCut, rectangleCut;

        double[] a = Console.ReadLine().Split().Select(double.Parse).ToArray();

        rectangleCut = a[0] + a[1];
        diagonalCut = Math.Sqrt(a[0] * a[0] + a[1] * a[1]);

        Console.WriteLine("{0:F9}", rectangleCut - diagonalCut);
    }
}