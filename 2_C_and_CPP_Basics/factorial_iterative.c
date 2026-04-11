#include <stdio.h>

int factorial(int number)
{

    int fact = 1;
    for (; number > 0; number--)
    {

        fact *= number;
    }
    return fact;
}

int main()
{

    int number1;

    printf("The number for which you want to calculate the factorial: ");
    scanf("%d", &number1);

    printf("%d", factorial(number1));

    return 0;
}
