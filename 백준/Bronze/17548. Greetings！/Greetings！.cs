using System;

class Program
{
    static void Main()
    {
        string input = Console.ReadLine();
        string result = string.Empty;

        if (!string.IsNullOrEmpty(input) && input.Length > 2)
        {
            result = input.Substring(1, input.Length - 2);
        }
        Console.WriteLine("h" + result + result + "y");
    }
}