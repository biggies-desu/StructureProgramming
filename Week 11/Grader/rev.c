#include <stdio.h>
void reverse(char text[])
{
    int i,n,temp;
    n = strlen(text);
    for(i=0;i<n/2;i++)
    {
        temp = text[i];
        text[i] = text[n-i-1];
        text[n-i-1] = temp;
    }
}

int main()
{
    char text[200];
    scanf("%s",text);
    reverse(text);
    printf("%s",text);

    //printf("%d",strlen(text));

    //for(i=0;i<strlen(text);i++)
}
