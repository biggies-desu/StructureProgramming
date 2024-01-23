#include<stdio.h>
#include<math.h>

float Distance(int x1, int x2, int y1, int y2)
{
    float a,b,d;
    a = abs(pow(x2-x1,2));
    b = abs(pow(y2-y1,2));
    d = pow(a+b,0.5);
    return d;
}

int main()
{
    int x1,x2,y1,y2;
    float distance;
    printf("Enter X1, X2 :");
    scanf("%d %d",&x1, &x2);
    printf("Enter Y1, Y2 :");
    scanf("%d %d",&y1, &y2);
    printf("%.2f",Distance(x1,x2,y1,y2));
}

