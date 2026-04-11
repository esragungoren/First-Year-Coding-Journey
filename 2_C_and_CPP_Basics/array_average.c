#include <stdio.h>
int main()
{

    int numbers[5];
    int i;
    for (i = 0; i < 5; i++)
    {

        printf("Enter the numbers: ");
        scanf("%d", &numbers[i]);
    }
    int sum = 0;

    for (i = 0; i < 5; i++)
    {

        sum += numbers[i];
    }

    printf("The average of the numbers you entered: %d", sum / 5);

    return 0;
}
