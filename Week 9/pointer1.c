#include<stdio.h>

main()

{
    int x;
    float y;

    x=2;
    y=1.5;

    printf("Memomry at %p is %d\n",&x,x);
    printf("Memomry at %p is %.2f\n",&y,y);

}
