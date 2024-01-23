#include<stdio.h>
#include<math.h>
#define PI 3.14159265
int main()
{
    float radian;
    printf("Please enter angle in degree : ");
    scanf("%f",&radian);
    printf("sin of %.1f degree(s) is %.4f\n",radian,sin(radian*PI/180));
    printf("cos of %.1f degree(s) is %.4f\n",radian,cos(radian*PI/180));
}
