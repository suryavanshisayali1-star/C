#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\nEnter Number = ");
    scanf("%d", &No);

    if((No >> 14) & 1)
    {
        printf("\n15th Bit is On");
    }
    else
    {
        printf("\n15th Bit is Off");
    }

    getch();
    return 0;
}
