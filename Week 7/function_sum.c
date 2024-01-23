#include<stdio.h>

float scan_input();
float adding(float a, float b);

int main()
{
    float a1,a2,sumval;

    a1 = scan_input();
    a2 = scan_input();


    printf("Sum is %.2f",sumval);

}

float scan_input()
    {
        float a;
        printf("Input real value ; ");
        scanf("%f",&a);

        return a;
    }

float adding(float a, float b)
    {
        return a+b;
    }
