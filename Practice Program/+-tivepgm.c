#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0;
    printf("Enter Any Random No:");
    scanf("%d",&No);

    if(No>0)
    {
        printf("%d is positive number",No);
    }
    else
    {
        printf("%d is negative number",No);
    }
    getch();
    return 0;
}