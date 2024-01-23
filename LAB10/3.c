#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include <stdbool.h>
void insertionSort (int list[], int last)
{
	int  walk, current;
	int  temp;
	bool located;
	for (current = 1; current <= last; current++)
	   {
	    located = false;
	    temp = list[current];
	    for (walk = current - 1; walk >= 0 && !located;)
	       if (temp < list[walk])
	          {
	           list[walk + 1] = list[walk];
	           walk--;
	          }
	       else
	           located = true;
	    list [walk + 1] = temp;
	   }
	return;
}

int main()
{
   char fname[80];
   FILE *fptr;
   int n, i;
   printf("Please enter number for sorting : ");
   scanf("%d",&n);
   int ary[n];
   for(i=0; i<n; i++) {
        scanf( "%d",&ary[i]);
    }
    fflush(stdin);
   insertionSort (ary, n - 1);
   printf("Enter your file name : ");
   gets(fname);
   if( (fptr=fopen(fname, "w+")) == NULL )
     {
         printf("Error in open file");
         exit(1);
     }
    fprintf(fptr,"Sorted number by Highest to Lowest\n");
    for(i=n-1; i>-1; i--) {
        fprintf(fptr,"%d ", ary[i]);
    }
    fclose(fptr);
    printf("---------------------------------------");
    printf("\nNow, You have the following sorted number:\n");
    for(i=n-1; i>-1; i--){
        printf("%d ",ary[i]);
    }
    printf("\nFILE IS ALREADY SAVED." );
    return 0;
}
