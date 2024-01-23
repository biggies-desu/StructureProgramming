#include<stdio.h>

int approximation(int n)
{
    if(n != 1)
    {
        return 1+(approximation(n/2));
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n,value;

    scanf("%d",&n);
    value = approximation(n);
    printf("%d %d",value+1,value);
}
