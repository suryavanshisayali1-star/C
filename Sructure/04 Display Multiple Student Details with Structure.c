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

    printf("\nRoll No = %d",student1.RollNo);
    printf("\nName = %s",student1.Name);
    printf("\nPercentage = %0.2f",student1.per);
    printf("\nGrade = %c",student1.Grade);
    printf("\n\n*********************************************************************************************");

    struct stud student2 = {102,"Komal",85.45,'A'};

    printf("\nRoll No = %d",student2.RollNo);
    printf("\nName = %s",student2.Name);
    printf("\nPercentage = %0.2f",student2.per);
    printf("\nGrade = %c",student2.Grade);
    printf("\n\n*********************************************************************************************");

    struct stud student3 = {103,"Madhu",74.32,'B'};

    printf("\nRoll No = %d",student3.RollNo);
    printf("\nName = %s",student3.Name);
    printf("\nPercentage = %0.2f",student3.per);
    printf("\nGrade = %c",student3.Grade);
    printf("\n\n*********************************************************************************************");

    struct stud student4 = {104,"Nikita",70.13,'B'};

    printf("\nRoll No = %d",student4.RollNo);
    printf("\nName = %s",student4.Name);
    printf("\nPercentage = %0.2f",student4.per);
    printf("\nGrade = %c",student4.Grade);
    printf("\n\n*********************************************************************************************");

    struct stud student5 = {103,"Divya",68.32,'C'};

    printf("\nRoll No = %d",student5.RollNo);
    printf("\nName = %s",student5.Name);
    printf("\nPercentage = %0.2f",student5.per);
    printf("\nGrade = %c",student5.Grade);
    printf("\n\n*********************************************************************************************");

getch();
return 0;
}
