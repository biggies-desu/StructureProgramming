#include<stdio.h>
#define max 10

int main()
{
    int array[max], i;

    for(i=0; i<max; i++)
    {
        array[i] = i*i*i;
    }
    for(i=0; i<max; i++)
    {
        printf("%d ==> %d\n",i,array[i]);
    }
}
