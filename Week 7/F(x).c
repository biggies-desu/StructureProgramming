#include<stdio.h>

int main()

{
    int num1,num2,answer;
    num1 = scan_input();
    num2 = scan_input();
    answer = fx(num1,num2);
    printf("f(x) of %d and %d is %d",num1,num2,answer);


}
int scan_input()
    {
        int num;
        printf("Input real value ; ");
        scanf("%d",&num);

        return num;
    }

int fx(int x, int y)
    {
        int z;
        {
        if (x>=y)
            {
                z = (x*x)+(2*x)+(x*y);
            }
            else
                z = y;
        }
        return z;
    }
