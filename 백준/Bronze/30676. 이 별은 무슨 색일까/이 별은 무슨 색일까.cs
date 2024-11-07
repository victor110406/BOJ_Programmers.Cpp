using System;

namespace Programmers
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            if (a >= 620)
            {
                Console.WriteLine("Red");
            }
            else if(a>= 590)
            {
                Console.WriteLine("Orange");
            }
            else if (a >= 570)
            {
                Console.WriteLine("Yellow");
            }
            else if (a >= 495)
            {
                Console.WriteLine("Green");
            }
            else if (a >= 450)
            {
                Console.WriteLine("Blue");
            }
            else if (a >= 425)
            {
                Console.WriteLine("Indigo");
            }
            else if (a >= 380)
            {
                Console.WriteLine("Violet");
            }
        }
    }
}