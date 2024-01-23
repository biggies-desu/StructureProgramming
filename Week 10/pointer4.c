#include<stdio.h>

void strcat1(char *s, char *t)
{
    char *ptr = t + strlen(t);
    while(*s != '\0');
    {
        *ptr = *s;
        s++;
        ptr++;
    }

    *ptr = '\0';
    puts(t);
}


void main()
{
    char str1[] = "hello ";
    char str2[] = " world";

    strcat1(str2,str1);
}
