using System;
using System.Linq;

namespace Programmers
{
    class Program
    {
        static void Main()
        {
            string a = Console.ReadLine();
            string[] b = Console.ReadLine().Split();
            int result = 0;

            for (int i = 0; i < b.Length; i++) 
            {
                if (a == b[i]) 
                {
                    result++;
                }
            }

            Console.WriteLine(result);
        }
    }
}