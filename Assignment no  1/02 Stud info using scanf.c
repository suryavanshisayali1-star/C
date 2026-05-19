#include<stdio.h>
#include<conio.h>
int main()
{
   char name[50],roll_no[40],course[50],city[30];
    printf("Enter Student Name:");
    scanf("%s",&name);

    printf("Enter Roll No:");
    scanf("%s",&roll_no);

    printf("Enter Course:");
    scanf("%s",&course);

    printf("Enter City:");
    scanf("%s",&city);

    printf("\nStudent Name:%s",&name);
    
    printf("\n Roll No:%s",&roll_no);

    printf("\n Course:%s",&course);

    printf("\n City:%s",&city);


    getch();
    return 0;
}
