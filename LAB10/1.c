#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
typedef struct{
    char id[10];
    char title[30];
    char artist[15];
    char date[11];
    char company[20];
    float price;
}Albumn;

int main()
{
   char numstr[80], fname[80], check_continue;
   FILE *fptr;
   Albumn cd;
   printf("Enter your file name : ");
   scanf("%s",fname);
   if( (fptr=fopen(fname, "a+")) == NULL )
     {
         printf("Error in open file");
         exit(1);
     }
     do {
        printf("Please enter the product code : ");
        scanf("%s",cd.id);
        printf("Please enter the product title : ");
        scanf("%s",cd.title);
        printf("Please enter the name of artist : ");
        scanf("%s",cd.artist);
        printf("Please enter the issue date : ");
        scanf("%s",cd.date);
        printf("Please enter the company : ");
        scanf("%s",cd.company);
        printf("Please enter the price : ");
        scanf("%f",&cd.price);

        printf("Do you want to continue (y/n) : ");
        scanf(" %c",&check_continue);

        fprintf(fptr,"\n==========================");
        fprintf(fptr,"\nProduct code = %s", cd.id );
        fprintf(fptr,"\nproduct title = %s", cd.title );
        fprintf(fptr,"\nName of artist = %s", cd.artist );
        fprintf(fptr,"\nIssue date = %s", cd.date );
        fprintf(fptr,"\nThe company = %s", cd.company );
        fprintf(fptr,"\nPrice = %.2f", cd.price );

    }   while(check_continue == 'y');

    fclose(fptr);
    printf("\nTHANK YOU." );
    printf("\nTHE CS-KMUTNB MUSIC Shop IS CLOSING." );
    printf("\nNOW, WE ARE WRITING THE REMAINING GOODS FOR TOMORROW!" );
    return 0;
}
