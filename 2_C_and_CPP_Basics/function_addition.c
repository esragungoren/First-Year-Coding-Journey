#include <stdio.h>

int sum1(int number1, int number2)
{

    return (number1 + number2);
}
int main()
{

    int number1;
    int number2;
    int sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    sum = sum1(number1, number2);
    printf("%d", sum);

    return 0;
}
