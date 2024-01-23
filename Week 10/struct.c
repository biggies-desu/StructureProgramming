#include<stdio.h>

void main()
{
    /*struct complex
    {
        char name[30];
        int age;
        int money;
    };

    struct complex a1, b1;*/

    struct complex
    {
        char name[30];
        int age;
        int money;
    }a1, b1;
    strcpy(a1.name, "Biggies");
    a1.age = 20;
    a1.money = 50000;

    strcpy(b1.name, "Max");
    b1.age = 25;
    b1.money = 120000;

    printf("%s %d %d\n",a1.name,a1.age,a1.money);
    printf("%s %d %d\n",b1.name,b1.age,b1.money);
}
