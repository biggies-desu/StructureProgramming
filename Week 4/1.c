#include<stdio.h>
int main()
{
    int score;

    printf("Enter a number : ");
    scanf("%d",&score);

    if ((score>=10) && (score<=20));
        printf("Score is between 10 to 20");
    else
        {
        printf("Score is not between 10 to 20");
        }
    printf("\nEnd program!");
}
