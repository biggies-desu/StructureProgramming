#include<stdio.h>
int main()
{
    int A,B,C,m,Y;

    printf("Please enter A : ");
    scanf("%d",&A);
    printf("Please enter B : ");
    scanf("%d",&B);
    printf("Please enter C : ");
    scanf("%d",&C);
    printf("Please enter m : ");
    scanf("%d",&m);

    if(m==5)
        {
            Y = (A*m*m)-(B*m)-C;
            printf("Y = (A*m*m)-(B*m)-C");
        }
    else
        if(m>5)
        {
            Y = (A*m*m)+(B*m)+C;
            printf("Y = (A*m*m)+(B*m)+C");
        }
        else
        {
            Y = (A*m*m)+(B*m);
            printf("Y = (A*m*m)+(B*m)");
        }

    printf("\nThe result of Y = %d",Y);
}
