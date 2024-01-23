#include<stdio.h>

int main()
{
    int i;
    int result = 1;
    int n;

    printf("Enter n : " );
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   result = result * i;
    }
    printf("your answer is %d",result);
}
