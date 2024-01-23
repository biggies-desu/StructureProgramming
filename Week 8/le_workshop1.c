#include<stdio.h>

int main()
{
    int number, result;

    printf("Enter num : ");
    scanf("%d",&number);

    result = sum(number);

    printf("sum = %d",result);

}

int sum(int num)
{
    if (num!=0)
        return num + sum(num-1);
    else
        return num;
}
