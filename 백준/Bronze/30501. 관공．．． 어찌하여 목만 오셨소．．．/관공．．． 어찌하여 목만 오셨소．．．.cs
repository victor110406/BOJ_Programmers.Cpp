using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;

namespace Hello_world
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());

            string culprit = "";
            for (int i = 0; i < N; i++)
            {
                string name = Console.ReadLine();
                if (name.Contains("S"))
                {
                    culprit = name;
                }
            }

            Console.WriteLine(culprit);
        }
    }
}

