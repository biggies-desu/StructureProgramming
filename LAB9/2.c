#include<stdio.h>
#include<math.h>
typedef struct
{
    float x,y,z;
}vector3D;
float Findlength(vector3D array[],int n)
{
    float l;
    int i;
    for(i=0;i<n/3;i++)
    {
        l = sqrt(((array[i].x)*(array[i].x))+((array[i].y)*(array[i].y))+((array[i].z)*(array[i].z)));
        return l;
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    vector3D array[n];
    for(i=0;i<n/3;i++)
    {
        scanf("%f %f %f",&array[i].x,&array[i].y,&array[i].z);
        printf("\n%.2f",Findlength(array ,n));
    }
}
