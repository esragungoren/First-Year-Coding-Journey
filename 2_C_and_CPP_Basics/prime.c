#include <stdio.h>

int is_prime(int number)
{
    int i;

    if (number <= 1)
    {
        return 0;
    }

    for (i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int number1;

    printf("Enter the number you want to check: ");
    if (scanf("%d", &number1) != 1)
    {
        printf("Invalid input.");
        return 1;
    }

    if (is_prime(number1) == 0)
    {
        printf("%d is NOT a Prime Number.\n", number1);
    }
    else
    {
        printf("%d is a Prime Number.\n", number1);
    }

    return 0;
}
