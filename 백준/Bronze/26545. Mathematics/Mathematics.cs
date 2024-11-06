using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int result = 0;
            for(int i=0; i<a; i++)
            {
                result += int.Parse(Console.ReadLine());
            }
            Console.WriteLine(result);
        }
    }
}
