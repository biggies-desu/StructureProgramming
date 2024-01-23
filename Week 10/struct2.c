#include<stdio.h>

void main()
{
    struct data
    {
        char book_name[30];
        float price;
        float discount;
    };

    struct data b1,b2;

    strcpy(b1.book_name, "Programming in TurboC");
    b1.price = 200.00;
    b1.discount = b1.price * 0.10;

    strcpy(b2.book_name, "Cool book");
    b2.price = 300.00;
    b2.discount = b1.price * 0.10;

    printf("Book name : %s\nPrice : %.2f\nDiscount Price : %.2f\n",b1.book_name,b1.price,b1.discount);
    printf("Total price : %.2f",b1.price-b1.discount);

}
