#include<stdio.h>
#include<string.h>
main()
{
    /*char str1[20];
    scanf("%s",str1);
    printf("%s",str1);*/

    char str[50];
    char str1[] = "hello ";
    char str2[] = " world";

    strcat(str1, str2);

    printf("%s (%d char)",str1,strlen(str1));

    strcpy(str,str2);
    puts(str);

    printf("%d",strcmp(str1,str2));    //if 0 = both value are same (case sensitive)
}
