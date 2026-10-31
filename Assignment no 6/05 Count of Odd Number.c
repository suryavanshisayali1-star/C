#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0, Dig=0, Temp=0, OCnt=0;

    printf("\nEnter Number = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;
        if(Temp % 2 == 1)
            OCnt++;
        Temp = Temp / 10;
    }

    printf("\nCount Of Given Number : %d", OCnt);

    getch();
    return 0;
}
