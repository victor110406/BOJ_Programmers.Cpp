using System;

namespace Hello_world
{
    internal class Program
    {
        static void Main(string[] args)
        {

            int N = int.Parse(Console.ReadLine());
            Console.WriteLine('@' + new string('@', 1 * N) + '@');
            for (int i=0; i<N; i++)
            {
                Console.WriteLine('@' + new string(' ', 1 * N) + '@');
            }
            Console.WriteLine('@' + new string('@', 1 * N) + '@');
        }
    }
}
