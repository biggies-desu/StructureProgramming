#include<stdio.h>

int main()
{
    float income;
    float tax;
    float pay;

    printf("Enter a number : ");
    scanf("%f",&income);
    if((income>100000))
    {   tax = 0.37;
    }
    else if((income>50000))
    {   tax = 0.3;
    }
    else if((income>30000))
    {   tax = 0.2;
    }
    else if((income>20000))
    {   tax = 0.1;
    }
    else
    {   tax = 0.0;
    }
    printf("Your tax rate: %.f%%",tax*100);
    pay = income*tax;
    printf("\n\nYou must pay for tax: %.2f",pay);
    printf("\nThe remain income is : %.2f",income-pay);
}
