#include<stdio.h>

int main ()
{
    float x1,x2,x3,x4;
    float med;
    printf("Please input data (x1-x4): ");
    scanf("%f",&x1);
    scanf("%f",&x2);
    scanf("%f",&x3);
    scanf("%f",&x4);
    med = (x2 + x3) / 2;
    printf("Result:\n");
    printf(" Median is %.1f",med);

}
