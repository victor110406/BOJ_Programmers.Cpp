using System;

class Program
{
    static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        int result = 0;

        for(int i = 0; i < a; i++)
        {
            string[] s = Console.ReadLine().Split(' ');
            if (s[0] == "136") { result += 1000; }
            else if(s[0] == "142") { result += 5000; }
            else if (s[0] == "148") { result += 10000; }
            else if (s[0] == "154") { result += 50000; }
        }
        Console.WriteLine(result);
    }
}