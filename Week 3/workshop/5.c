#include<stdio.h>

int main()

{
    int num1, num2;

    printf("Enter num1 & num2 ; ");
    scanf("%d %d", &num1, &num2);


    if(num1 == num2)
    {
    printf("%d == %d\n", num1, num2);
    }

    if(num1 != num2)
    {
    printf("%d != %d\n", num1, num2);
    }

    if(num1 < num2)
    {
    printf("%d < %d\n", num1, num2);
    }

    printf("End program!");

}
