#include <stdio.h>
int main()
{
    int x,a;
    printf("f(x) : ");
    scanf("%d",&x);
    a = get_Fx(x);
    printf("f(x) of %d is %d",x,a);
}
int get_Fx(int x)
{
    int value;
    if(x<0)
    {
        value = (x*x)+(2*x)+3;
    }
    if(x>0)
    {
        value = x-2;
    }
    if(x=0)
    {
        value = 0;
    }
    return value;
}
