#include<stdio.h>
void constructMatrix(int *a,int *b,int *p,int n)
{
    int index = 0,i,j;
    for(i = 0;i<n*n;i++)
    {
        for(j=0;j<n;j++)
        {
            *(p+index)=a[i]*b[j];
            index++;
        }
    }
}
int main()
{
    int n,i,t=0;
    int a[100],b[200],p[100];
    printf("Enter N : ");
    scanf("%d",&n);
    printf("Input array A\n");
    printf("Enter %d intigers :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Input array B\n");
    printf("Enter %d intigers :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    constructMatrix(a,b,p,n);
    printf("Matrix P\n");
    for(int i=0;i<n*n;i++)
    {
        printf("%d\t",p[i]);
        t++;
        if(t == (n))
        {
            printf("\n");
            t=0;
        }
    }
}
