using System;

namespace ConsoleApp2
{
    internal class Problem2
    {
        static void Main()
        {
            Console.WriteLine("Enter the number of laboratories: ");
            int n = Convert.ToInt32(Console.ReadLine());

            int laboratoriesWithMoreBrownRats = 0;
            int minMaleRatsLab = -1;
            int minMaleRatsCount = int.MaxValue;

            for (int lab = 1; lab <= n; lab++)
            {
                Console.WriteLine($"\nLaboratory {lab}:");

                Console.WriteLine("Enter the number of white rats in this laboratory: ");
                int whiteRats = Convert.ToInt32(Console.ReadLine());

                Console.WriteLine("Enter the number of brown rats in this laboratory: ");
                int brownRats = Convert.ToInt32(Console.ReadLine());

                int maleRatsCount = 0;

                for (int i = 1; i <= whiteRats + brownRats; i++)
                {
                    Console.WriteLine($"Enter the age of rat {i}: ");
                    int age = Convert.ToInt32(Console.ReadLine());

                    Console.WriteLine($"Enter the gender of rat {i} (M/F): ");
                    char gender = Convert.ToChar(Console.ReadLine().ToUpper());

                    if (gender == 'M')
                    {
                        maleRatsCount++;
                    }
                }

                if (brownRats > whiteRats)
                {
                    laboratoriesWithMoreBrownRats++;
                }

                if (maleRatsCount < minMaleRatsCount)
                {
                    minMaleRatsCount = maleRatsCount;
                    minMaleRatsLab = lab;
                }
            }

            Console.WriteLine($"\nNumber of laboratories with more brown rats than white rats: {laboratoriesWithMoreBrownRats}");
            Console.WriteLine($"Laboratory with the lowest number of male rats: {minMaleRatsLab}");
        }
    }
}
