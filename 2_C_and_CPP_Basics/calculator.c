#include <stdio.h>
int main() {

    char operator;
    float x,y,result;
    printf("Enter want you basic operation ");
    scanf("%c",&operator);
    printf("Enter first number ");
    scanf("%f",&x);
    printf("Enter second number ");
    scanf("%f",&y);

    switch(operator){
case '+':
    result= x+y;
    printf("Result %.2f",result);
    break;
//
case '-':
    result= x-y;
    printf("Result %.2f",result);
    break;

case '*':
    result= x*y ;
    printf("Result %.2f",result);
    break;

case '/':
    result= x/y;
    printf ("Result %.2f",result);
    break;

    }

    return 0;
}
