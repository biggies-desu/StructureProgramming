#include<stdio.h>

int main()
{
    int array[] = {5,7,2,9,8,4};
    int k = 9;
    int i = 0;
    while((array[i] != k) && (i < 6))
        {
            i++;
        }
    if(i<6)
    {
        printf("found value %d at array[%d]",k,i);
    }
    else
    {
        printf("not found any value in array");
    }
}

