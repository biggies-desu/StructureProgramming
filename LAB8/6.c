#include<stdio.h>

void drawpoints(char c,int *list,int n)
{
    for(int i=0;i< 1;i++)
    {
        for(int j=1;j<=10;j++)
        {

            if(j == *(list) || j == *(list+1))
            {
                printf("%c",c);
            }
            else
            {
                printf(" ");
            }
            printf("");
        }
        printf("\n");
    }
}

void drawline(char c,int begin,int end)
{
    printf("");
    for(int i=begin;i<=end;i++)
    {
        printf("%c",c);
    }
    printf("\n");
}

int main( )
{
    int list[10];
    char c = '*';

    /* draw triangle */
    list[0] = 5;
    drawpoints(c, list, 1);
    list[0] = 3; list[1] = 7;
    drawpoints(c, list, 2);
    list[0] = 1; list[1] = 9;
    drawpoints(c, list, 2);
    drawline(c, 1, 10);
    /* draw rectangle */
    printf("\n");
    c = '#';
    drawline(c, 1, 10);
    list[0] = 1; list[1] = 10;
    drawpoints(c, list, 2);
    drawpoints(c, list, 2);
    drawline(c, 1, 10);

    getchar();
}
