using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string s = Console.ReadLine();
            int count = 0;

            for (int i = 0; i < n; i++)
            {
                switch (s[i])
                {
                    case 'a':
                    case 'i':
                    case 'u':
                    case 'e':
                    case 'o':
                        count++;
                        break;
                }
            }

            Console.WriteLine(count);
        }
    }
}
