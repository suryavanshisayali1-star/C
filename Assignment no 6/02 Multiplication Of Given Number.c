#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0, Dig=0, Dsum=0, Temp=0;

    printf("\nEnter Number = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;
        Dsum = Dsum + Dig;
        Temp = Temp / 10;
    }

    printf("\nSum Of Given Number : %d", Dsum);

    getch();
    return 0;
}
