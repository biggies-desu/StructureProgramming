#include<stdio.h>

int fac(int n)
{
    int y;
    if (n == 0)
    {
        printf("%d = %d\n",n,1);
        return 1;
    }
    else
    {
        y = n*fac(n-1);
        printf("%d = %d\n",n,y);
        return y;

    }

}


int main()
{
    int x=5,y;

    y = fac(x);
    printf("fac(%d) = %d",x,y);
}
