#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0, Dig=0, Temp=0, ZCnt=0;

    printf("\nEnter Number = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;
        switch(Temp)
            case1:(Temp % 2 == 0)
                    ZCnt++;
                    printf("The Number is Even");
                    break;

        Temp = Temp / 10;
    }

    printf("\nThanks");

    getch();
    return 0;
}
