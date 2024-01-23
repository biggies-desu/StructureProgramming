#include <stdio.h>
#include <stdlib.h>
int main()
{
    float  cherprang, music, jameji;
    cherprang = 70;
    music  = cherprang - cherprang *20/100;
    jameji = (cherprang + music)/2;
    printf("cherprang = %6.2f\n, music = %6.2f\n, jameji = %6.2f\n", cherprang, music, jameji);
    system("PAUSE");
    return 0;
}
