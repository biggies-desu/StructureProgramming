#include<stdio.h>

int main()
{

    int table[12][11], row, col;
    printf("***Multiplication***");

    for(row=1; row<=12; row++)
    {
        printf("\n");
        for(col=2; col<=12; col++)
        {
            table[row-1][col-2] = row*col;
            printf(" %3d ",table[row-1][col-2]);
        }
    }
}
