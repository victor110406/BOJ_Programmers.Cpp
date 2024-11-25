using System;

class Program
{
    static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        
        for(int i=0;i<a; i++)
        {
            int b = int.Parse(Console.ReadLine());
            if (Math.Abs(b) % 2 == 0) 
            {
                Console.WriteLine(b + " is even");
            }
            else
            {
                Console.WriteLine(b + " is odd");
            }
        }
    }
}