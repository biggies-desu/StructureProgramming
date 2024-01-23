#include<stdio.h>

int main()
{
    int array[100];
    int i,j,n,m,temp,temp2;
    float mean,median,mode;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<n;i++)
    {
        mean = mean + array[i];
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
    m=n/2;
    if(n%2==0)
    {
        median = (array[m-1]+array[m])/2;
    }
    else
    {
        median = array[m];
    }




    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]!=array[j])
            {
                temp2 = array[0];
            }
            else
            {
                temp2 = array[i];
                mode = temp2;
            }
        }
    }
    if(mode==0)
    {
        mode = array[0];
    }

    printf("%.2f %.2f %.2f",mean/n,median,mode);
;

}
