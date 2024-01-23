#include<stdio.h>
void main()
{
    int *a;
    int c = 2, b = 5;

    a = &c;
    printf("%d \n",*a);

    a = &b;
    printf("%d \n",*a);

    b = 50;
    printf("%d \n",*a);
}
