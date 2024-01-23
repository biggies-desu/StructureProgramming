#include<stdio.h>

int main()
{
    char c;


    printf("Enter a character : ");
    scanf("%c", &c);



    switch(c)
    {
        case 'a': //since its no "Break", so it passed down to next line
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': { printf("%c is vowel",c);}   break;
        default: {  printf("%c is not vowel",c);}
    }
}
