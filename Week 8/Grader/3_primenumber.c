#include<stdio.h>


int main()
{
    int n,p;

    scanf("%d", &n);
    if(n>=0 && n<=10000)
        p = prime(n,n/2);
        if (p == 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        return 0;
}

int prime(int n, int i)
{
    if(i==1)
    {
        return 1;
    }
    else
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            return prime(n,i-1);
        }
}

