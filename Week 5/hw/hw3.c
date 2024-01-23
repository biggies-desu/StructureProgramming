#include<stdio.h>

int main()
{
    int n,m,i,j,k;
    scanf("%d",&n);
    m = n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<i; j++)
        {
        printf(" ");
        }
        for(k=1; k<=m; k++)
        {
        printf("*");
        }
        m = m-1;
    printf("\n");
    }
}
