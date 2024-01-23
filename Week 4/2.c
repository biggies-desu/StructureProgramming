#include<stdio.h>

int main()
{
    int score;

    printf("Enter a number : ");
    scanf("%d",&score);

    if((score >= 80) && (score <= 100))
    {   printf("A");
    }

    else if((score >= 70) && (score <= 79))
    {   printf("B");
    }

    else if((score >= 60) && (score <= 69))
    {   printf("C");
    }

    else if((score >= 50) && (score <= 59))
    {   printf("D");
    }

    else
    {   printf("F");
    }

    printf("\nEnd program!");
}
