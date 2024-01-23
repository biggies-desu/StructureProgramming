#include<stdio.h>

int main()
{
    int P[]={1,2,6,4,5,5,4,1,6,3,5,2,6,6,6,6},n,x;
    int max=P[0];
    int size =sizeof(P)/sizeof(int);
    int i,k;
    int a=4; //looking for "4" (3rd)
    int c=0; //scaning in array (3rd)

    printf("==============\n");

    for(i = 0; i<size; i++)
    {
        if (max < P[i])
        {
            max = P[i];
        }
    }
    printf("max : %d\n",max);

    printf("==============\n");

    int q[16]={0};

    for(i = 0; i<n; i++)
    {
        k = P[i];
        q[k] = q[k] + 1;
    }
    for(i = 1; i<n; i++)
    {
        printf("%d : %d time(s)\n",i,q[i]);
    }

    printf("==============\n");

    for(c = 0; c < n; c++)
    {
        if(P[c]== k)
            break;
    }
    if(c<n)
        printf("%d",c);
    else
        printf("Not found");
}
