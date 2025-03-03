using System;

namespace Hello_world
{
    internal class Program
    {
        static void Main(string[] args)
        {

            while (true)
            {
                int N = int.Parse(Console.ReadLine());

                if (N == 0) {
                    break;
                }

                for (int i=0; i<N; i++)
                {
                    Console.WriteLine(new string('*',i+1));
                }
            }
        }
    }
}
