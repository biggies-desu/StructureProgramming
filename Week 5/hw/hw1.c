#include<stdio.h>
int main()
{
    int n, i, j;
    int array[15];
    int sum;
    int size = sizeof(array)/sizeof(int);
    scanf("%d",&n);
    for(i = 0; i<size; i++)
    {
        if(n%2==0)
        {
            array[i] = 0;
        }
        else
        {
            array[i] = 1;
        }
        n=n/2;
    }
    for(j = 0; j<size; j++)
    {
        sum = sum + array[j];
    }
    printf("%d",sum);


}
