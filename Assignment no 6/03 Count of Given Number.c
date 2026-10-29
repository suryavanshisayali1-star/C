#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0, Dig=0, Dsum=0, Temp=0, Ele=0;

    printf("\nEnter Number = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;
        Ele++;
        Temp = Temp / 10;

    }

    printf("\nCount Of Given Number : %d", Ele);

    getch();
    return 0;
}
