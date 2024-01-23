#include<stdio.h>

int main()

{
    int n[3],x;
    char C[3];
    for(int i=0; i<=2; i++)
    {
    scanf("%d", &n[i]);
    }
    scanf(" %c %c %c", &C[0],&C[1],&C[2]);
    for(int i=0; i<=2; i++)
    {
        for (int j = i+1; j<=2; j++)
        {
            if (n[i] > n[j])
            {
                x=n[i];
                n[i] = n[j];
                n[j]=x;
            }
        }
     }
     for(int i=0; i<=2; i++)
        {
        if(C[i]=='A')
            {
            C[i]=n[0];
            }
        else if(C[i]=='B')
            {
            C[i]=n[1];
            }
        else if(C[i]=='C')
            {
            C[i]=n[2];
            }
        }
    for(int i=0; i<=2; i++)
    {
    printf("%d\n",C[i]);
    }
    return 0;
}
