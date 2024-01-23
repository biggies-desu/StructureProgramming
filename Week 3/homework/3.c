#include<stdio.h>
#include<math.h>

int main()
{
    float degree;
    float s, c;

    printf("Please enter angle in degree: ");
    scanf("%f",&degree);
    printf("%f\n",degree);


    s = sin(degree);
    c = cos(degree);

    printf("sin of %.1f degree is %.4f\n",degree,s);
    printf("cos of %.1f degree is %.4f",degree,c);


}
