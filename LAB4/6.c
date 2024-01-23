#include<stdio.h>
int main()
{
    int type,name,sum=0;
    char check;
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("                               VENDING MACHINE                          \n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    while(1)
    {
        printf("Welcome to vending machine. Enter 1-Sandwich, 2-cake, 3-Beverage: ");
        scanf("%d",&type);

        if(type==1)
        {
            printf("Enter 1-Tuna (30), 2-Hamburger (40) , 3-Ham (35): ");
            scanf("%d",&name);
            if(name==1){sum+=30;}
            if(name==2){sum+=40;}
            if(name==3){sum+=35;}
        }
        if(type==2)
        {
            printf("Enter 1-Donut (17), 2-JamRoll (15), 3- Pastry (25), 4-Cookie-(10): ");
            scanf("%d",&name);
            if(name==1){sum+=17;}
            if(name==2){sum+=15;}
            if(name==3){sum+=25;}
            if(name==4){sum+=10;}
        }
        if(type==3)
        {
            printf("Enter 1-Coke (15), 2-Est (15), 3-GreenTea (60): ");
            scanf("%d",&name);
            if(name==1){sum+=15;}
            if(name==2){sum+=15;}
            if(name==3){sum+=60;}
        }
        printf("Do you want to continue (Y/N) : ");
        fflush(stdin);
        scanf("%c",&check);
        if(check=='N'){break;}
        if(check=='Y'){continue;}
    }
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("THANK YOU VERY MUCH. THE PRICE IS: %d BATH\n",sum);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    return 0;
}
