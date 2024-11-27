using System;

class Program
{
    static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        string s = Console.ReadLine();

        for (int i = 1; i < a; i++)
        {
            if (s[i] == 'J')
            {
                Console.WriteLine(s[i - 1]);
            }
        }
    }
}