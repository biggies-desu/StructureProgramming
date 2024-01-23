#include<stdio.h>
#define pi 3.14159265359

float calc_rec(int width, int height)
{
    return width*height;
}

float calc_cir(float radius)
{
    return pi*radius*radius;
}

main()
{
    int option,d,width,height;
    float radius,area;
    printf("============ MENU =============\n");
    printf("1. Calculate area pf rectangle\n");
    printf("2. calculate area of circle\n");
    printf("\nPlease Enter 1 or 2 : ");
    scanf("%d",&option);
    if(option == 1)
    {
        printf("Please Enter width : ");
        scanf("%d",&width);
        printf("Please Enter height : ");
        scanf("%d",&height);
        area = calc_rec(width,height);
        printf("Area = %.2f",area);
    }
    if(option == 2)
    {
        printf("Please Enter radius : ");
        scanf("%f",&radius);
        area = calc_cir(radius);
        printf("Area = %.2f",area);
    }
}
