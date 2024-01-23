#include<stdio.h>

int main(){
    int money;
    printf("Please enter amount: ");
    scanf("%d", &money);

    if(money >= 1000)
        {
        printf("Number of 1000 is %d, ", money/1000);
        money = money % 1000;
        }
    else
        {
        printf("Number of 1000 is 0, ");
        }

    if(money >= 500)
        {
        printf("Number of 500 is %d, ", money/500);
        money = money % 500;
        }
    else
        {
        printf("Number of 500 is 0, ");
        }

    if(money >= 100)
        {
        printf("Number of 100 is %d, ", money/100);
        money = money % 100;
        }
    else
        {
        printf("Number of 100 is 0, ");
        }

    if(money >= 50)
        {
        printf("Number of 50 is %d, ", money/50);
        money = money % 50;
        }
    else
        {
        printf("Number of 50 is 0, ");
        }

    if(money >= 20)
        {
        printf("Number of 20 is %d, ", money/20);
        money = money % 20;
        }
    else
        {
        printf("Number of 20 is 0, ");
        }

    if(money >= 10)
        {
        printf("Number of 10 is %d, ", money/10);
        money = money % 10;
        }
    else
        {
        printf("Number of 10 is 0, ");
        }

    if(money >= 1)
        {
        printf("Number of 1 is %d, ", money);
        }
    else
        {
        printf("Number of 1 is 0, ");
        }

    return 0;
}
