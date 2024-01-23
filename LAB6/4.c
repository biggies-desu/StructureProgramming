#include<stdio.h>
int main()
{
    int ISBN,temp,sum;
    int array[10];
    int i;
    printf("ISBN : ");
    scanf("%d",&ISBN);

    for(i=0;i<10;i++)
    {
        temp = ISBN%10;
        array[i] = temp;
        ISBN = ISBN/10;
    }

    for(i=0;i<10;i++)
    {
        array[i] = array[i]*(i+1);
    }

    for(i=0;i<10;i++)
    {
        sum = sum+array[i];
    }

    printf("Sum of Weight = %d\n",sum);

    if(sum%11==0)
    {
        printf("0");
    }
}
