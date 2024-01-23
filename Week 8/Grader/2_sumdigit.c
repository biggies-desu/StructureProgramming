#include<stdio.h>
int main()
{
    int n,sum;
    int a[5];
    scanf("%d",&n);
    sum = splitdigit(a,n);
    printf("%d",sum);
}

int splitdigit(int a[], int n)
{
    int i,sum;
    for (i=0;i<5;i++)
    {
        a[i] = n%10;
        n = n/10;
        sum = sum + a[i];
    }
    return sum;
}
