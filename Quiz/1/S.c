#include<stdio.h>
#include<string.h>

int main()
{
    int array[10000];
    int result[10];
    int n,i;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%c",&array);
        printf("%d",strlen(array));
    }
}
