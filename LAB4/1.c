#include <stdio.h>
int main()
{
int num1,num2;
char opr;

    printf("Please enter number1: ");
    scanf("%d",&num1);
    printf("Please enter number2: ");
    scanf("%d",&num2);

    printf("Please enter operator: ");
    scanf(" %c",&opr);

    switch(opr)
    {
        case '+':
            printf("Result is %d",num1+num2);
            break;
        case '-':
            printf("Result is %d",num1-num2);
            break;
        case '*':
            printf("Result is %d",num1*num2);
            break;
        case '/':
            printf("Result is %d",num1/num2);
            break;
        default:
            printf("Invalid operation.\n");
    }
}
