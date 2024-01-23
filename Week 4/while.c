#include<stdio.h>

int main()
{
    int i;
    int result = 1;
    int n;

    printf("Enter n : " );
    scanf("%d",&n);

    while(n >= 1)
    {   result = result * n;
        n = n - 1;
    }
    printf("%d",result);
}
