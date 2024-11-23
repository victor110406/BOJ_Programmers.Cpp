using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        int result = 0;

        for(int i=0; i<a; i++)
        {

            string b = Console.ReadLine();
            string[] b2 = b.Split('-');

            if (int.Parse(b2[1]) <= 90)
            {
                result++;
            }
        }
        Console.WriteLine(result);
    }
}