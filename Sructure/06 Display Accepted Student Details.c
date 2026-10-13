#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student
{
    int rollno;
    char name[20];
    float per;
    char Grade;
};

int main()
{
    struct student S1={},S2={},S3={},S4={},S5={};

    printf("\nFirst Student Info ==> \n\n");

    printf("Enter Roll No = ");
    scanf("%d",&S1.rollno);

    printf("\nEnter Name = ");
    scanf("%s",&S1.name);

    printf("\nEnter Percentage = ");
    scanf("%f",&S1.per);

    fflush(stdin);

    printf("\nEnter Grade = ");
    S1.Grade = getche();

    /////////////////////////////////////////////////////////////////////////////////////////

    printf("\n\nSecond Student Info ==> \n\n");

    printf("Enter Roll No = ");
    scanf("%d",&S2.rollno);

    printf("\nEnter Name = ");
    scanf("%s",&S2.name);

    printf("\nEnter Percentage = ");
    scanf("%f",&S2.per);

    fflush(stdin);

    printf("\nEnter Grade = ");
    S2.Grade = getche();

    /////////////////////////////////////////////////////////////////////////////////////////

    printf("\n\nThird Student Info ==> \n\n");

    printf("Enter Roll No = ");
    scanf("%d",&S3.rollno);

    printf("\nEnter Name = ");
    scanf("%s",&S3.name);

    printf("\nEnter Percentage = ");
    scanf("%f",&S3.per);

    fflush(stdin);

    printf("\nEnter Grade = ");
    S3.Grade = getche();

    /////////////////////////////////////////////////////////////////////////////////////////

    printf("\n\nFourth Student Info ==> \n\n");

    printf("Enter Roll No = ");
    scanf("%d",&S4.rollno);

    printf("\nEnter Name = ");
    scanf("%s",&S4.name);

    printf("\nEnter Percentage = ");
    scanf("%f",&S4.per);

    fflush(stdin);

    printf("\nEnter Grade = ");
    S4.Grade = getche();

    /////////////////////////////////////////////////////////////////////////////////////////

    printf("\n\Fifth Student Info ==> \n\n");

    printf("Enter Roll No = ");
    scanf("%d",&S5.rollno);

    printf("\nEnter Name = ");
    scanf("%s",&S5.name);

    printf("\nEnter Percentage = ");
    scanf("%f",&S5.per);

    fflush(stdin);

    printf("\nEnter Grade = ");
    S5.Grade = getche();

    printf("\n\n***************Student Details*********************\n\n");

    printf("Roll No = %d",S1.rollno);
    printf("\nName = %s",S1.name);
    printf("\nPercentage = %0.2f",S1.per);
    printf("\nGrade = %c",S1.Grade);

    printf("Roll No = %d",S2.rollno);
    printf("\nName = %s",S2.name);
    printf("\nPercentage = %0.2f",S2.per);
    printf("\nGrade = %c",S2.Grade);

    printf("Roll No = %d",S3.rollno);
    printf("\nName = %s",S3.name);
    printf("\nPercentage = %0.2f",S3.per);
    printf("\nGrade = %c",S3.Grade);

    printf("Roll No = %d",S4.rollno);
    printf("\nName = %s",S4.name);
    printf("\nPercentage = %0.2f",S4.per);
    printf("\nGrade = %c",S4.Grade);

    printf("Roll No = %d",S5.rollno);
    printf("\nName = %s",S5.name);
    printf("\nPercentage = %0.2f",S5.per);
    printf("\nGrade = %c",S5.Grade);

    getch();
    return 0;
}
