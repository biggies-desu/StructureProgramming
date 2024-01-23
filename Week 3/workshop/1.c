#include<stdio.h>

int main()
{
    int a, b;

    a = 1;
    b = 10;

    printf("Before : a = %d , b = %d\n", a, b);

    a++;    // post incremental operator
    --b;    // pre decremental operator

    // PRE in/de : Second most important operator (Basically lower than '()' [bracket])
    // POST in/de : last most important operator (Basically lower than '=' [equal])

    printf("After : a = %d , b = %d", a, b);
}
