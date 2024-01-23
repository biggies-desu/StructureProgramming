#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

int main()
{
   char numstr[80], fname[80]="input.txt";
   FILE *fptr;
   int id[3], qty[3], j, code, qtyProduct;
   char name[3][10];
   float price[3], cost;
do{
   printf("Welcome to KMUTNB Shop\n");
   printf("The list of product:\n");
   if( (fptr=fopen(fname, "r+")) == NULL )
     {
         printf("Error in open file");
         exit(1);
     }
     for(j=0; j<3; j++) {
        fscanf( fptr,"%d %s %f %d\n",&id[j],name[j],&price[j], &qty[j]);
     }
    for(j=0; j<3; j++) {
        printf("%d \t %s \t %.2f \t %d\n", id[j],name[j],price[j], qty[j]);
    }
    printf("Please enter the product code : ");
    scanf("%d",&code);
    for(j=0; j<3; j++) {
        if (code==id[j]){
           printf("\nYou have chosen %s with Price %.2f ",name[j], price[j]);
           printf("\nHow many? ");
           scanf("%d",&qtyProduct);
           cost=qtyProduct*price[j];
           printf("\nYour total price is %.2f",cost);
           qty[j]=qty[j]-qtyProduct;
        }
    }
    rewind(fptr);
    for(j=0; j<3; j++) {
        fprintf(fptr,"%d \t %s \t %.2f \t %d\n", id[j],name[j],price[j], qty[j]);
    }
     printf("\nDo you want to continue (y/n):");
   } while( tolower(getche()) == 'y' );
    fclose(fptr);
    printf("\nTHE SHOP IS CLOSING" );
    printf("\nNOW, WE ARE WRITING THE REMAINING QTY OF GOODS FOR TOMORROW!" );
    return 0;
}

