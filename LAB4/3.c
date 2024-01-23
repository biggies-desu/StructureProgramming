#include <stdio.h>
int main()
{
    int weight, height,ideal,sum;
    char gender,name[30];

    printf("Please enter your name: ");
    scanf("%s",&name);

    printf("Are you male of female, %s (M,F): ",name);
    scanf(" %c",&gender);

    printf("%s, what is your height in c.m. and weight in k.g: ",name);
    scanf("%d %d",&height,&weight);

    switch(gender)
    {
        case 'M':
            ideal = height-105;
            sum = ideal-weight;
            if (sum == 0)
                printf("%s, your ideal weight is %d kg, you are normal body weight",name,ideal);
            else
                if(sum > 0)
                    printf("%s, your ideal weight is %d kg, you are %d kg underweight",name,ideal,sum);
                if(sum < 0)
                    printf("%s, your ideal weight is %d kg, you are %d kg overweight",name,ideal,sum);
            break;
        case 'F':
            ideal = height-110;
            sum = ideal-weight;
            if (sum == 0)
                printf("%s, your ideal weight is %d kg, you are normal body weight",name,ideal);
            else
                if(sum > 0)
                    printf("%s, your ideal weight is %d kg, you are %d kg underweight",name,ideal,sum);
                if(sum < 0)
                    printf("%s, your ideal weight is %d kg, you are %d kg overweight",name,ideal,sum);
            break;
        default:
            return 0;
    }
}
