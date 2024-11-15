using System;

class Program
{
    static void Main()
    {
        
        string[] input = Console.ReadLine().Split();
        int x = int.Parse(input[0]);
        int n = int.Parse(input[1]);

        for (int i = 0; i < n; i++)
        {
            if (x % 2 == 0)
                x = (x / 2) ^ 6;
            else
                x = (2 * x) ^ 6;
        }

        Console.WriteLine(x);
    }
}