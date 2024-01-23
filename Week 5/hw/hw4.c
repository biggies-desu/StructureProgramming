#include<stdio.h>
int main()
{
    int n,i;

    int a=0,b=1,c;
    scanf("%d",&n);
    for(i = 2; i<n; i++)
    {
    c = a+b;
    a = b;
    b = c;
    }
    printf("%d",a+b);
}
