#include<stdio.h>
int main()
{
    int n,i;
    int array[8]={0};

    scanf("%d",&n);

    if(n%2==0)
    {
        array[0] = 1;
        array[1] = 0;
        if(n%4==0)
        {
            array[2] = 0;
        }
        else
        {
            array[2] = 1;
        }
        if(n%6==0)
        {
            array[3] = 0;
        }
        else
        {
            array[3] = 1;
        }
    }
    else
    {
        array[0] = 0;
        array[1] = 1;
        if(n%3==0)
        {
            array[2] = 0;
        }
        else
        {
            array[2] = 1;
        }
        if(n%5==0)
        {
            array[3] = 0;
        }
        else
        {
            array[3] = 1;
        }
    }

    if(n>10)
    {
        array[4] = 0;
    }
    else
    {
        array[4] = 1;
    }
    if(n>100)
    {
        array[5] = 0;
    }
    else
    {
        array[5] = 1;
    }
    if(n>1000)
    {
        array[6] = 0;
    }
    else
    {
        array[6] = 1;
    }
    if(n>10000)
    {
        array[7] = 0;
    }
    else
    {
        array[7] = 1;
    }

    for(i=0;i<8;i++)
    printf("%d",array[i]);

}

