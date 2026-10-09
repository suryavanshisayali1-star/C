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
    struct stud student1 = {101,"Samu",98.86,'A+'};
    printf("\nRoll No = %d",student1.RollNo);
    printf("\nName = %s",student1.Name);
    printf("\nPercentage = %0.2f",student1.per);
    printf("\nGrade = %c",student1.Grade);

getch();
return 0;
}
