#include<stdio.h>
#include<math.h>
typedef struct
{
    int x;
    int y;
}POINT;
int quardrant(POINT array)
{
    if(array.x > 0 && array.y > 0) {
        return 1;
    }
    else if(array.x < 0 && array.y > 0) {
        return 2;
    }
    else if(array.x < 0 && array.y < 0) {
        return 3;
    }
    else if(array.x > 0 && array.y < 0) {
        return 4;
    }
    else if(array.x ==0 && array.y == 0) {
        return 0;
    }
}
float distance(POINT array[],int n)
{
    float dist;
    for(int i = 0; i < n; i++)
    {
        if(n == 2) {
            dist = sqrtf(pow(array[i].x - array[i+1].x, 2) + pow(array[i].y - array[i+1].y, 2));
            printf("%.2f\n", dist);
            break;
        }
        if(i == n-1) {
            dist = sqrtf(pow(array[i].x - array[0].x, 2) + pow(array[i].y - array[0].y, 2));
            printf("%.2f\n", dist);
        }
        else{
            dist = sqrtf(pow(array[i].x - array[i+1].x, 2) + pow(array[i].y - array[i+1].y, 2));
            printf("%.2f\n", dist);
        }
    }
}
int main()
{
    int n,i;

    scanf("%d",&n);
    POINT array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&array[i].x,&array[i].y);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",quardrant(array[i]));
    }
    distance(array,n);
}
