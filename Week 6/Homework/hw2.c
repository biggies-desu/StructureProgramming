#include <stdio.h>


int main() {
    int n,row,cont;
    int column=1 ;
    scanf("%d",&n);
    while (column <= n){
        for (cont = 1; cont <= (n*2)-1; cont++){
            if (cont == (n - (column-1)) || cont == (n + (column-1))){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
        column += 1;
    }
    row = 2;
    while (column <= ((n*2)-1)){
        for (cont = 1; cont <= (n*2)-1; cont++){
            if (cont == row || cont == (n*2) -row){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
        column += 1;
        row += 1;
    }
}
