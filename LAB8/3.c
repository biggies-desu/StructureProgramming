#include <stdio.h>
#include <string.h>
void reverse(char *text)
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
    int i,digit=0;
    char text[200];
    gets(text);
    reverse(text);
    printf("%s",text);

    for(i=0;i<strlen(text);i++)
    {
        if(text[i]>=48 && text[i]<=57)
        {
            digit++;
        }
    }
    printf("\n%d",digit);
}
