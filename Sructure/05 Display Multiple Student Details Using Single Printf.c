#include<stdio.h>
#include<conio.h>

struct stud
{
    int RollNo;
    char Name[20];
    float per;
    char Grade;
};

int main()
{
    struct stud student1 = {101,"Samu",98.86,'A'};
    struct stud student2 = {102,"Divya",68.32,'C'};
    struct stud student3 = {103,"Nikita",70.13,'B'};
    struct stud student4 = {104,"Komal",85.45,'A'};
    struct stud student5 = {105,"Madhu",74.32,'B'};

    printf("\nRoll No    = %d, %d, %d, %d, %d", student1.RollNo, student2.RollNo, student3.RollNo, student4.RollNo, student5.RollNo);
    printf("\nName       = %s, %s, %s, %s, %s", student1.Name, student2.Name, student3.Name, student4.Name, student5.Name);
    printf("\nPercentage = %0.2f, %0.2f, %0.2f, %0.2f, %0.2f", student1.per, student2.per, student3.per, student4.per, student5.per);
    printf("\nGrade      = %c,%c,%c,%c,%c",student1.Grade, student2.Grade, student3.Grade, student4.Grade, student5.Grade);

getch();
return 0;
}
