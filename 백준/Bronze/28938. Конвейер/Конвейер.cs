using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            string a = Console.ReadLine();
            string[] b = Console.ReadLine().Split();
            int result = 0;
            for (int i=0; i<b.Length; i++)
            {
                result += int.Parse(b[i]);
            }

            if (result == 0)
            {
                Console.WriteLine("Stay");
            }
            else if (result > 0)
            {
                Console.WriteLine("Right");
            }
            else if (result < 0)
            {
                Console.WriteLine("Left");
            }
        }
    }
}