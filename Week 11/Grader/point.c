#include<stdio.h>
#include <math.h>

int main()
{
    int i,n;
    float temp;
    int x[10000], y[10000];

    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }

    float x_cal,y_cal,result[10000];

    for(i=0;i<n-1;i++)
    {
        x_cal = pow((x[i]-x[i+1]),2);
        y_cal = pow((y[i]-y[i+1]),2);
        result[i] = sqrt(x_cal+y_cal);
    }
    for(i=0;i<n-1;i++)
    {
        if(result[i]>result[i+1])
        {
            temp = result[i];
        }
        else
        {
            temp = result[i+1];
        }
    }
    printf("%.3f ",temp);
}
