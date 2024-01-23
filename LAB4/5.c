#include <stdio.h>

int main()
{
    int n,result=1,i;

    printf("Please enter number of factorial: ");
    scanf("%d",&n);

    for(i=1;i<=n;++i)
    {
        result = result*i;
    }

    printf("Result is %d",result);
}
