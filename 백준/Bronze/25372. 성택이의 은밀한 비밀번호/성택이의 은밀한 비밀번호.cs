using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            for(int i=0;i<a; i++)
            {
                string b = Console.ReadLine();
                if (b.Length >=6 && b.Length <= 9)
                {
                    Console.WriteLine("yes");
                }
                else
                {
                    Console.WriteLine("no");
                }
            }
            
        }
    }
}