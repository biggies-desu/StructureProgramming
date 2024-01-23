#include<stdio.h>
#include<math.h>
int main()
{
    int array[5];
    int n,i;
    float avg,sd;
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<5;i++)
    {
        avg = avg+array[i];
    }
    avg = avg/5;

    for(i=0;i<5;i++)
    {
        sd = sd + pow(array[i]-avg,2);
    }
    sd = sqrt(sd/4);

    printf("%.2f %.2f",avg,sd);
}
