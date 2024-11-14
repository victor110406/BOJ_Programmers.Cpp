using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int[] input = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Array.Sort(input);

        if (input[0] + input[1] == input[2])
        {
            Console.WriteLine(1);
        }
        else if(input[0] * input[1] == input[2])
        {
            Console.WriteLine(2);
        }
        else
        {
            Console.WriteLine(3);
        } 
    }
}