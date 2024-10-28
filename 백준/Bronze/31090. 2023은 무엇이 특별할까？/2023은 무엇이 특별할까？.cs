using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            for (int i=0; i<int.Parse(input); i++)
            {
                string result = Console.ReadLine();
                int nextYear = int.Parse(result) + 1;
                int Year = int.Parse(result.Substring(2,2));

                if (nextYear % Year == 0)
                {
                    Console.WriteLine("Good");
                }
                else
                {
                    Console.WriteLine("Bye");
                }
            }

        }
    }
}
