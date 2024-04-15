using System;

namespace MyApp // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] myArray = { 5, 2, 3 };
            int result = Sum(myArray);

        }
        static int Sum(int[] myArray, int i = 0)
        {
            if (i >= myArray.Length)
                return 0;

            return myArray[i] + Sum(myArray, i + 1);

        }

    }
}
