#include <stdio.h>
#include <stdlib.h>
int main()
{
    float base, height, area;
    printf("Enter base value: ");
    scanf("%f", &base);
    printf("Enter height value: ");
    scanf("%f", &height);
    area = 1/2*base*height;
    printf("Area = %7.2f\n", area);
    system("PAUSE");
    return 0;
}
