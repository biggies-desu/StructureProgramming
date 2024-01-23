#include<stdio.h>

int main()
{
    int h,m;
    scanf("%d %d",&h,&m);
    printf("%d",parking_fee(h,m));
}

int parking_fee(int h,int m)
{
    int sum=0,i,temp;

    if(m>=15)
    {
        h=h+1;
    }
    if(h>0)
    {
        for(i=h;i>6;--i)
        {
            sum = sum+50;
            h=i;
            printf("%d\n",i);
        }
        for(i=h-1;i>3;--i)
        {
            sum = sum+40;
            h=i;
            printf("%d\n",i);
        }
        for(i=h-1;i>=1;--i)
        {
            sum = sum+20;
            h=i;
            printf("%d\n",i);
        }
            sum = sum+10;
            printf("%d\n",1);
        return sum;
    }
    else
    {
        return sum;
    }

}
