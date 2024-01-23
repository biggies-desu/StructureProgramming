#include <stdio.h>

int main(){
    int n,cont,row;
    scanf("%d",&n);
    if (n % 2 == 0){
        cont = 2;
    }
    else {
        cont = 1;
    }
    while (cont <= n){
        for (row = cont; row >=1;row--){
            printf("*");
        }
        printf("\n");
        cont += 2;
    }
    cont -= 4;
    while (cont > 0){
        for (row = cont; row >=1;row--){
            printf("*");
        }
        printf("\n");
        cont -= 2;
    }
}
