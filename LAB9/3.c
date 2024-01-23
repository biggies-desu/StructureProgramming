#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct
{
    int cash[7];
}bank;
bank function(int money)
{
    int arr[] = {1000, 500, 100, 50, 20, 10, 1};
    bank banks;
    for(int i = 0; i < 7; i++) {
        int j = money / arr[i];
        banks.cash[i] = j;
        money = money - (j * arr[i]);
    }
    return banks;
}
int main()
{
    int n;
    scanf("%d", &n);
    bank banks = function(n);
    for(int i = 0; i < 7; i++) {
        printf("%d ", banks.cash[i]);
    }
}