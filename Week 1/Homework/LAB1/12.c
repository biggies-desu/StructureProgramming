#include <stdio.h>
#include <stdlib.h>
int main()
{
char name1[10], name2[10];
    float  ht1,  ht2;
    printf("Please enter name and height of the first student: ");

    scanf("%s  %f", name1, &ht1);
    printf("Please enter name and height of the second student: ");

    scanf("%s  %f", name2, &ht2);
    printf("%s is taller than %s  = %7.2f\n", name1, name2, ht1-ht2);
    system("PAUSE");
    return 0;
}
