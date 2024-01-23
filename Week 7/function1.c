#include<stdio.h>

void get_Fx(int x);

main()
{
    int first,second,third;


printf("\n F(x) = 3x + 10 if x > 0\n");
printf("\n F(x) = 10 if x = 0\n");
printf("\n Enter 3 values\n");
scanf("%d %d %d",&first,&second,&third);

get_Fx(first);
get_Fx(second);
get_Fx(third);
}

void get_Fx(int x)
{
    if (x > 0)
    {
        printf("F(%d) is %d\n", x, (3*x)+10);
    }
    else
    {
        printf("F(%d) is 10%d\n", x);
    }
}
