#include<stdio.h>

int main()
{
   int n,re;
   scanf("%d",&n);
   if (n>=0 && n<=10000)
   {
        re=reverse(n);
        printf("%d",re);
   }
   else
   {
       printf("0");
   }

}

int i,sum=0;
reverse(int n)
{
    if(n)
    {
        i = n % 10;
        sum = sum * 10 + i;
        reverse(n / 10);
    }
    else
        return sum;
}
