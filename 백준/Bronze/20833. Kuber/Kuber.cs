using System;

class Program
{
    static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        int result = 0;

        for (int i = 1; i <= a; i++)
        {
            result += i * i * i;
        }
        Console.WriteLine(result);
    }
}