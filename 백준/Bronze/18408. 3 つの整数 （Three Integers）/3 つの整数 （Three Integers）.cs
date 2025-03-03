using System;

namespace Hello_world
{
    internal class Program
    {
        static void Main(string[] args)
        {

            string[] N = Console.ReadLine().Split(' ');
            int one = 0;
            int two = 0;

            for (int i=0; i<N.Length; i++)
            {
                if (N[i] == "1") { one++; }
                else if (N[i] == "2") { two++; }
            }

            if (one > two)
            {
                Console.WriteLine(1);
            }
            else
            {
                Console.WriteLine(2);
            }
        }
    }
}
