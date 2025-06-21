using System;

namespace ConsoleApp4
{
    internal class Problem4
    {
        static void Main()
        {
            Console.WriteLine("Enter a number to check if it is an Armstrong number: ");
            int number = Convert.ToInt32(Console.ReadLine());

            int sumOfCubes = cubeOfDigits(number);

            isArmstrong(sumOfCubes, number);
        }

        static int cubeOfDigits(int number)
        {
            int sum = 0;
            int temp = number;

            while (temp != 0)
            {
                int digit = temp % 10;
                sum += digit * digit * digit;
                temp /= 10;
            }

            return sum;
        }

        static void isArmstrong(int sum, int number)
        {
            if (sum == number)
            {
                Console.WriteLine($"{number} is an Armstrong number.");
            }
            else
            {
                Console.WriteLine($"{number} is not an Armstrong number.");
            }
        }
    }
}
