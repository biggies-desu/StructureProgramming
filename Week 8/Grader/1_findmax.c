#include<stdio.h>
int main()
{
    int i, n;
    int a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

    printf("%d",findmax(a,n));

}

int findmax(int a[], int n)
{
    int x,y;
    if(n == 1)
        return a[0];

    else
        x = a[n-1];
        y = findmax(a, n-1);
        return (x>y)?x:y;

}



