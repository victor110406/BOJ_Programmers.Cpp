using System;
using System.Numerics;

namespace BeakJoon
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] str = Console.ReadLine().Split(' ');
            BigInteger idx1 = BigInteger.Parse(str[0]);
            BigInteger idx2 = BigInteger.Parse(str[1]);
            Console.WriteLine(idx1 + idx2);
        }
    }
}