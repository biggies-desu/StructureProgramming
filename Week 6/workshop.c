#include<stdio.h>

int main()
{
    int i,j,k;

    int a[][3] =    {{1,2,1},
                     {3,4,5}};
    int b[][4] =    {{1,2,5,6},
                     {3,7,0,1},
                     {6,2,4,9}};
    int c[2][4] = {0};

    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            for(k=0;k<=2;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
