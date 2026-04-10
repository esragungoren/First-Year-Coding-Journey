using System;

namespace Bank
{
    class Program
    {
        static void Main(string[] args)
        {
            double balance = 1000.50;
            Console.Write("Enter your name: ");
            string customerName = Console.ReadLine();
            bool isRunning = true;

            Console.WriteLine("********** WELCOME TO THE BANK SYSTEM **********");
            Console.WriteLine("Customer: " + customerName);

            while (isRunning)
            {
                Console.WriteLine("\n------- MENU -------");
                Console.WriteLine("1. View Balance");
                Console.WriteLine("2. Deposit Money");
                Console.WriteLine("3. Withdraw Money");
                Console.WriteLine("4. Exit");
                Console.Write("Please select an option: ");

                string input = Console.ReadLine();
                int choice;

                if (!int.TryParse(input, out choice))
                {
                    Console.WriteLine("Invalid input! Please enter a number (1-4).");
                    continue;
                }

                switch (choice)
                {
                    case 1:
                        Console.WriteLine("Current Balance: " + balance + "$");
                        break;

                    case 2:
                        Console.Write("Enter the amount to deposit: ");
                        double deposit;
                        if (!double.TryParse(Console.ReadLine(), out deposit))
                        {
                            Console.WriteLine("Error: Please enter a numeric amount.");
                            continue;
                        }
                        balance += deposit;
                        Console.WriteLine("Success! New Balance: " + balance + "$");
                        break;

                    case 3:
                        Console.Write("Enter the amount to withdraw: ");
                        double withdraw;
                        if (!double.TryParse(Console.ReadLine(), out withdraw))
                        {
                            Console.WriteLine("Error: Please enter a numeric amount.");
                            continue;
                        }

                        if (withdraw > balance)
                        {
                            Console.WriteLine("Error: Insufficient funds!");
                        }
                        else
                        {
                            balance -= withdraw;
                            Console.WriteLine("Success! New Balance: " + balance + "$");
                        }
                        break;

                    case 4:
                        Console.WriteLine("Thank you for using our bank.");
                        isRunning = false;
                        break;

                    default:
                        Console.WriteLine("Invalid choice! Please enter a number between 1 and 4.");
                        break;
                }
            }
        }
    }
}