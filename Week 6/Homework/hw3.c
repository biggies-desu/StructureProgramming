#include<stdio.h>

int main()

{
    int i;
    float n,sum,distance,velocity,time;
    scanf("%f",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&velocity,&time);
        distance = velocity*(time/60);
        sum = sum + distance;
    }
    printf("%.1f",sum);
}
