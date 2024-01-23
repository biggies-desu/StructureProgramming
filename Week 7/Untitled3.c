#include<stdio.h>
int gcd(int a, int b);
int scan_input();

int main()
{
    int num1, num2;

    num1 = scan_input();
    num2 = scan_input();
    printf("%d,%d",num1,num2);

    int result = gcd(num1, num2);
    printf("GCD of %d and %d is %d",num1,num2,result);
}

int scan_input()
    {
        int num;
        printf("Input real value ; ");
        scanf("%d",&num);

        return num;
    }

int gcd(int a, int b)
{
    int x;

        for(int i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
        x = i;
        }
    }
    return x;
}
