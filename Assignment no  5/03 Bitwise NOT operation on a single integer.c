#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("Enter First No: ");
    scanf("%d",&No);

    No = ~No;

    printf("Result = %d ",No);

    getch();
    return 0;
}
