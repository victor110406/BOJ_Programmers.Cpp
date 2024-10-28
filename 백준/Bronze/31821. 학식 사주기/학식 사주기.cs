using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            int manuCount = int.Parse(input);

            string[] manu = new string[manuCount]; 
                
            for (int i = 0; i < manuCount; i++)
            {
                manu[i] = Console.ReadLine();
            }

            string input2 = Console.ReadLine();
            int result = 0;
            for (int i = 0; i < int.Parse(input2); i++)
            {
                string test = Console.ReadLine();
                int test1n = int.Parse(test);
                result += int.Parse(manu[test1n - 1]);
            }

            Console.WriteLine(result);
        }
    }
}

