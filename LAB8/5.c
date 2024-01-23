#include<stdio.h>
void powerNum(int *a, int n)
{
   printf("\n*a (before loop)= %d",*a);
   int j, power=1;
   for (j=0;j<n;j++){
      power = power*(*a);
       *a= power;
      printf("\n%d,%d\n",*a,power);
   }
}
void main()
{
      char ch1, ch2,ch3,*c;
      int i1, i2, i3, *i;
      i1=20;
      i2=i1+2;
      i3=i2+2;
      ch1='Z';
      ch2='Y';
      c=&ch1;
      printf("%d",*c);
      ch3=*c;
      i=&i2;
   printf("&c=%u, c=%u,*c=%c\n",&c,c,*c);
   ch2=*c;
   printf("ch=%c %c %c\n",ch1,ch2,ch3);
   printf("int=%d %d %d\n",i1,i2,i3);
   powerNum(&i1,3);
   printf("int=%d %d %d\n",i1,i2,i3);
   printf("i=%u, *i= %d\n",i,*i);
}
