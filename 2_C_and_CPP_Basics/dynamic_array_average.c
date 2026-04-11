#include <stdio.h>

float calculate_average(int array[], int length) {
    int i;
    float sum = 0; 

    for (i = 0; i < length; i++) {
        sum += array[i]; 
    }
    
    return sum / length;
}

int main() {
    int n, i;

    printf("How many numbers will you enter? ");
    scanf("%d", &n);

    int array[n];

    for (i = 0; i < n; i++) {
        printf("%d. element: ", i + 1);
        scanf("%d", &array[i]); 
    }

    printf("The average is: %.2f\n", calculate_average(array, n));

    return 0;
}
