#include<stdio.h>
int maxarray(int array[], int n)
{
    int i, sum = 0, max = array[0];
    for(i = 0; i < n; i++)
    {
        sum += array[i];
        if(sum < array[i])
        {
            sum = array[i];
        }
        if(max > sum) {}
        else
        {
            max = sum;
        }
    }
    return max;
}


int main()
{
    int n,i;
    int array[100];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("%d",maxarray(array,n));

}
