using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] a = Console.ReadLine().Split();
            int result = 0;
            for(int i=0; i<a.Length; i++)
            {
                result += int.Parse(a[i]);
            }
            Console.WriteLine(result * 5);
        }
    }
}
