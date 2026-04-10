using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace First_Lesson
{
    class Program
    {
        static void Main(string[] args)
        {
            string parents = "Mom and Dad ";

            int myAge = 19;

            double favoriteNumber = 4.64;

            char firstLetter = 'E';

            Console.WriteLine(parents + myAge + " " + favoriteNumber + " " + firstLetter);


            Console.Write("Passenger Name is ");
            string passengerName = Console.ReadLine();
            Console.WriteLine("Welcome, " + passengerName + "!");

            Console.Write("Enter your age: ");
            int randomAge = int.Parse(Console.ReadLine());
            Console.WriteLine("Your age is " + randomAge);

            Console.Write("Enter your password: ");
            int password = int.Parse(Console.ReadLine());
            if (password == 230208)
            {
                Console.WriteLine("Password is true.");
            }
            else
            {
                Console.WriteLine("Password is false.");
            }

            string[] name = new string[4];
            int lngth = name.Length;

            int[] numbers = { 4, 6, 12, 6 };
            Array.Sort(numbers); 
            for (int i = 0; i < numbers.Length; i++)
            {
                Console.WriteLine(numbers[i]);
            }

        }
    }
}