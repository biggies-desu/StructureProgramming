#include <stdio.h>

int main()
{
    float prices, number;
    float total;
    printf("Please Enter unit price: ");
    scanf("%f",&prices);
    printf("Please enter number: ");
    scanf("%f",&number);
    total = (prices*number)*107/100;
    printf("Total amonut = %.2f baht",total);
}
