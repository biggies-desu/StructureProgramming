#include<stdio.h>

int main()
{
    int a;
    a = 15;
    float b;
    b = 5.5;
    char c;
    c = 'C';

    printf("%d\n", a);
    printf("%x\n", a);
    printf("%d\n", b); //Decimal format on Float shown as 0
    printf("%f\n", b); //always shown 6 digit (.xxxxxx)
    printf("%c\n", c);
    printf("%d\n", c); //Decimal format on Char shown ASCII (at this case, ASCII of C = 67)
    printf("Ok this is epic! %d", a);

    /*  d = demical
        x = hex
        f = float
        c = char  */

// Using "\n" to get the new line (insert anywhere as you want)
// For example printf("\nhell\no"); would shown
    /*
        hell
        o         */

//Using "\t" to space 8 times (would shown "1       2       3")
    printf("\n1\t2\t3");

//  You can try multi operation in one command like this
    printf("\n %c %d %f", c,a,b);

//printf() format ["% Flag Maximum_width .Pecision Size Conversion_code"]
    // Flag : - for starting with left side, + for adding "+" before starting "%"
       printf("\n+%d",a);
    // Maximum_width : reserve the Column (for example : printf("%10d",a) will print "15" in 9th and 10th column (always right first))
       printf("\n%10d",a);
       printf("\n%-10d",a);
    // .Pecision : since default float can go up to 6 digits, %. would help
       printf("\n%.1f",b); //show only 1 digit output

}
