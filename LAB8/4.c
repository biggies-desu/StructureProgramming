#include<stdio.h>
#include<string.h>
typedef struct
{
    char array[1000];
}STRUCT;

void swap(STRUCT *a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%c",(a+j)->array[i],(a+j)->array[i],(a+j)->array[i]);
        }
    }
}
int main()
{
    STRUCT a[1000];
    int n;
    char text[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",text);
        strcpy(a[i].array,text);
    }
    swap(a,n);
}
