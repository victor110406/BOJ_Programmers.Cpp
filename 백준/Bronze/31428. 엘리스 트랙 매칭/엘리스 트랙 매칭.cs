using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        string[] b = Console.ReadLine().Split();
        string c = Console.ReadLine();

        int result = 0;

        for(int i=0; i<a; i++)
        {
            if (c == b[i])
            {
                result++;
            }
        }

        Console.WriteLine(result);
    }
}