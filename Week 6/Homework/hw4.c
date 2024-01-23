#include<stdio.h>

int main()

{

    int n,i,item=0,finalitem;
    int price,sellprice,profit;

    for(i=0;i<7;i++)
    {
        scanf("%d",&n);
        item = item + n;
        finalitem = item;
    }

    if(item<=100)
    {
        price=item*80;
    }
    else if(item>100&&item<250)
    {
        price = 100*80;
        item = item - 100;
        price = price + (item*70);
    }
    else if(item>250)
    {
        price = 250*70;
        item = item-250;
        price = price+(item*60);
    }

    sellprice=finalitem*100;
    profit=sellprice-price;

    printf("%d\n%d\n%d",price,sellprice,profit);
}

