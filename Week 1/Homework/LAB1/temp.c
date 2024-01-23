#include<stdio.h>
int main()
{
    float f1,f2,f3,c1,c2,c3;
    printf("Please input temperature1 (F): ");
    scanf("%f",&f1);
    c1 = 5*(f1-32)/9;
    printf("Please input temperature2 (F): ");
    scanf("%f",&f2);
    c2 = 5*(f2-32)/9;
    printf("Please input temperature3 (F): ");
    scanf("%f",&f3);
    c3 = 5*(f3-32)/9;
    printf("Result:\n");
    printf(" temperature1:%.f F is %-5.2f C\n",f1,c1);
    printf(" temperature2:%.f F is %-5.2f C\n",f2,c2);
    printf(" temperature3:%.f F is %-5.2f C\n",f3,c3);
    }
