#include<stdio.h>

int main()
{
    int a[] = {1,3,2,6,8,4};
    int n=6;
    int sum;
    printf("%d",findmin(a,n));
}

int findmin(int a[], int n)
{
    int x,y;
    if(n == 1)
        return a[0];

    else
        x = a[n-1];
        y = findmin(a, n-1);
        return (x<y)?x:y;

}
