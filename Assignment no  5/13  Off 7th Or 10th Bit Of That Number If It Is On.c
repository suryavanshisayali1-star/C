#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\nEnter Number = ");
    scanf("%d",&No);

    No = No & ~(1 << 6);
    No = No & ~(1 << 9);

    printf("\nModified Number of given number = %d",No);

getch();
return 0;
}
