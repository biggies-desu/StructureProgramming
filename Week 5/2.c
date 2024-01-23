#include<stdio.h>

int main()
{
    int s[10], n, i, sum;

    printf("=====AVG of 10 input=====\n");

    for(i=0; i<10; i++)
        {
            n = i+1;
            printf("\nEnter number (%d of 10)\n:",n);
            scanf("%d",&s[i]);
        }
    for(i=0; i<10; i++)
        {
            sum = sum + s[i];
        }

    float avg = (float)sum / 10;
    printf("avg = %f",avg);
}
