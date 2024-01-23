#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j,temp,sum;
    float avg,sd;
    int array[100];

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(array[j]>array[j+1])
            {
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        avg = avg+array[i];
    }
    avg = avg/n;

    for(i=0;i<n;i++)
    {
        sd = sd + pow(array[i]-avg,2);
    }
    sd = sqrt(sd/(n-1));

    printf("%.2f %d %d %.2f",avg,array[0],array[n-1],sd);
}
