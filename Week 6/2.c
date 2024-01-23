#include<stdio.h>

int main()
{
    int temp; //temp for keep value for swapping
    int i,j,n=6; //for loop
    int array[] = {7,9,6,10,3,5};

    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }

    printf("\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-1);j++)
        {
            if(array[j] < array[j+1])      // < for highest to lowest
            {                              // > for lowest to highest
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}
