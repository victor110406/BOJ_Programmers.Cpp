using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        int maxResult = 0;

        for (int i=0; i<a; i++)
        {
            int[] b = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            int result = b[0] * (b[1] + b[2]);
            if (b[0] == b[1] + b[2])
            {
                if (maxResult <= result * 2)
                {
                    maxResult = result * 2;
                }
            }
            else
            {
                if (maxResult <= result)
                {
                    maxResult = result;
                }
            }
        }
        Console.WriteLine(maxResult);
    }
}