using System;

namespace ConsoleApp1
{
    internal class Problem1
    {
        static void Main()
        {
            const int appleC = 75, meatC = 45, eggC = 128;
            int totalC = 0, users_exceeding = 0;
            for (int i = 1; i <= 3; i++)
            {
                Console.WriteLine($"Hi user {i} :)");
                Console.WriteLine("Enter your name please: ");
                string name = Console.ReadLine();

                Console.WriteLine($"Mr. {name}, enter your weight in KG please: ");
                double weight = Convert.ToDouble(Console.ReadLine());

                double calorieNeeds = 0.9 * weight * 24;

                Console.WriteLine("Enter the number of apples: ");
                int apples = Convert.ToInt32(Console.ReadLine());

                Console.WriteLine("Enter the number of meat: ");
                int meat = Convert.ToInt32(Console.ReadLine());

                Console.WriteLine("Enter the number of eggs: ");
                int eggs = Convert.ToInt32(Console.ReadLine());

                int userCalories = (apples * appleC) + (meat * meatC) + (eggs * eggC);
                totalC += userCalories;

                if (userCalories > calorieNeeds)
                {
                    users_exceeding++;
                }
                Console.WriteLine($"{name} consumed {userCalories} calories (Daily needs: {calorieNeeds:F2} calories).\n");
            }

            Console.WriteLine($"We have {users_exceeding} users that exceeded their daily calories need");
            Console.WriteLine($"Total calories: {totalC}");
        }
    }
}
