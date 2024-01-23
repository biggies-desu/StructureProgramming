#include<stdio.h>

void main()
{
    int a[]={1,5,7,2,10};
    int n = 5 , y;

    y = sumarray(a,n);
    printf("%d",y);

}

int sumarray(int x[], int j)
{
    int sum = 0;
    for(int i=0;i<j;i++)
    {
        sum = sum + x[i];
    }
    return sum;
}
