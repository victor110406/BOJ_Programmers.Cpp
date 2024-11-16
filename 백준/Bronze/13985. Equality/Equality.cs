using System;

class Program
{
    static void Main()
    {
        string[] a = Console.ReadLine().Split();

        if (int.Parse(a[0]) + int.Parse(a[2]) == int.Parse(a[4]))
        {
            Console.WriteLine("YES");
        }
        else
        {
            Console.WriteLine("NO");
        }
    }
}