#include<stdio.h>
#include<string.h>

struct Student{
    char name[30];
    char surname[50];
    int age;
    float gpa;
};

/*struct Book {
    char bookname[30];
    int price;
};

typedef struct
{
    char bookname[30];
    int price;
    } Book;*/


main()
{
    struct Student student1, student2;

    strcpy(student1.name, "Biggies");
    strcpy(student1.surname, "Desu");
    student1.age = 20;
    student1.gpa = 3.04;

    strcpy(student2.name, "Moo");
    strcpy(student2.surname, "Doop");
    student2.age = 15;
    student2.gpa = 2.46;

    printf("%s %s %d %.2f\n",student1.name,student1.surname,student1.age,student1.gpa);
    printf("%s %s %d %.2f",student2.name,student2.surname,student2.age,student2.gpa);

}
