#include<stdio.h>

int main()
{
    int n, prime = 0, i;
    scanf("%d",&n);

    for (i = 2; i<=n; i++)
    {
        if(n%i==0)
        {
            prime = prime + 1; //should be 1 and number
        }
    }
    if(prime==1) //prime number only can be subtract by 1 and n value
    {
        printf("1");
    }
    else
    {
        printf("-1");
    }
}
