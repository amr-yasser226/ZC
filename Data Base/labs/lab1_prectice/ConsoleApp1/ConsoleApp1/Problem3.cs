using System;

namespace ConsoleApp3
{
    internal class Problem3
    {
        static void Main()
        {
            Console.WriteLine("Enter the size of the array (N): ");
            int n = Convert.ToInt32(Console.ReadLine());

            int[] X = new int[n];
            int[] Y = new int[n];

            Console.WriteLine("Enter the values for the array X:");
            for (int i = 0; i < n; i++)
            {
                Console.Write($"Enter value {i + 1}: ");
                X[i] = Convert.ToInt32(Console.ReadLine());
            }

            int yIndex = 0;

            for (int i = 0; i < n; i += 3)
            {
                if (i < n)
                {
                    Y[yIndex++] = X[i];
                }
            }

            for (int i = 0; i < n; i += 3)
            {
                if (i + 1 < n)
                {
                    Y[yIndex++] = X[i + 1];
                }
                if (i + 2 < n)
                {
                    Y[yIndex++] = X[i + 2];
                }
            }

            Console.WriteLine("\nThe new array Y is: ");
            for (int i = 0; i < yIndex; i++)
            {
                Console.Write(Y[i] + " ");
            }
        }
    }
}
