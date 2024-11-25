using System;

class Program
{
    static void Main()
    {
        int result = 0;

        for(int i=0;i<6; i++)
        {
            string a = Console.ReadLine();
            if (a == "W")
            {
                result++;
            }
        }

        switch (result)
        {
            case 6: case 5:
                Console.WriteLine(1); break;
            case 4: case 3:
                Console.WriteLine(2); break;
            case 2: case 1:
                Console.WriteLine(3); break;
            default: 
                Console.WriteLine(-1); break;
        }
    }
}