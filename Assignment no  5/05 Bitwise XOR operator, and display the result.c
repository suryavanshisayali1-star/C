#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0,No2=0,Result=0;

    printf("Enter First No: ");
    scanf("%d",&No1);

    printf("Enter Second No : ");
    scanf("%d",&No2);

    Result = No1 ^ No2;

    printf("Result = %d ^ %d => %d ",No1,No2,Result);

    getch();
    return 0;
}
