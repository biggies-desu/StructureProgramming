#include<stdio.h>

int main()
{
    int i;
    int limit = 20;
    int result = 0;

    printf("Enter i value (Let's count i to 20) : " );
    scanf("%d",&i);
    printf(" i sum\n");

    for(i;i<=limit;i++)
    {   result = result + i;
        printf("%2.2d %2.2d\n",i,result);
    }

    printf("End program");
}
