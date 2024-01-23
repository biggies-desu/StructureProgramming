#include <stdio.h>
int main()
{
    int n1, n2, t, gcd;
    scanf("%d %d", &n1, &n2);

    for(t=1; t <= n1 && t <= n2; t++)
    {
        if(n1%t==0 && n2%t==0)
            gcd = t;
    }
    printf("%d",gcd);
    return 0;
}
