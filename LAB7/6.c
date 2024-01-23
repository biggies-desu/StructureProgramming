#include<stdio.h>

int minarray(int array[])
{
    return array[0];
}

int maxarray(int array[],int n)
{
    return array[n-1];
}

int sumarray(int array[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum + array[i];
    }
    return sum;
}

int main()
{
    int n, temp;
    int array[100];
    printf("Enter size of Array : ");
    scanf("%d",&n);
    printf("Enter Value in Array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    printf("Min = %d\n",minarray(array));
    printf("Max = %d\n",maxarray(array,n));
    printf("Sum = %d\n",sumarray(array,n));

}
