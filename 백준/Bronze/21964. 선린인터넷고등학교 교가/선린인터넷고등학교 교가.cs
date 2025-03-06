using System;

namespace Hello_world
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());
            string S = Console.ReadLine();

            Console.WriteLine(S.Substring(S.Length - 5));
        }
    }
}
