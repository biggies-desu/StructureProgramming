#include<stdio.h>
#include<string.h>

void encode (int key,char text[100])
{
    for(int i = 0; text[i] != '\0'; i++)
        {
            if(isupper(text[i]))
            {
                if(text[i] + key > 90)
                {
                    text[i] = text[i] - 26 + key;
                }
                else
                {
                    text[i] = (text[i] + key);
                }
                printf("%c", text[i]);
            }
            else
            {
                if(text[i] + key > 122)
                {
                    text[i] = text[i] - 26 + key;
                }
                else
                {
                    text[i] = (text[i] + key);
                }
                printf("%c", text[i]);
            }
        }
}

void decode (int key, char text[100])
{
    for(int i = 0; text[i] != '\0'; i++)
        {
            if(isupper(text[i]))
            {
                if(text[i] - key < 65)
                {
                    text[i] = text[i] + 26 - key;
                }
                else
                {
                    text[i] = (text[i] - key);
                }
                printf("%c", text[i]);
            }
            else
            {
                if(text[i] - key < 97)
                {
                    text[i] = text[i] + 26 - key;
                }
                else
                {
                    text[i] = (text[i] - key);
                }
                printf("%c", text[i]);
            }
        }
}
main()
{
    int key,mode;
    char text[100];

    scanf("%d %d",&key,&mode);
    scanf("%s",&text);

    if(mode == 0)
    {
        decode(key,text);
    }

    if(mode == 1)
    {
        encode(key,text);
    }

}

