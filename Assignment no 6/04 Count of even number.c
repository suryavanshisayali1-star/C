#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0, Dig=0, Temp=0, ECnt=0;

    printf("\nEnter Number = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;
        if(Temp % 2 == 0)
            ECnt++;
        Temp = Temp / 10;
    }

    printf("\nCount Of Given Number : %d", ECnt);

    getch();
    return 0;
}
