using System;
using System.Linq;

class Program
{
    static void Main()
    {
        string a = Console.ReadLine();
        int b = int.Parse(Console.ReadLine());

        int result = 0;

        for (int i = 0; i < b; i++)
        {
            string c = Console.ReadLine();
            if (a == c)
            {
                result++;
            }
        }

        Console.WriteLine(result);
    }
}