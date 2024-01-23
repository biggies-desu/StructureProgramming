#include<stdio.h>

int main()

{
    int a;

    printf("Enter Value : ");
    scanf("%d", &a);

    if(a>=10 && a<=15)
    {
        printf("Value is 10-15 (True)\n");
    }
    else
    {
        printf("Value is not in 10-15 (False)\n");
    }
    printf("End program!");
}
