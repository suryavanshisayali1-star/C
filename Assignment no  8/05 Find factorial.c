#include <stdio.h>
#include <conio.h>

int fact();

int main()
{
    fact();

    getch();
    return 0;
}

int fact()
{
    int i,fact= 1,No=0;

    printf("Enter Number : ");
    scanf("%d", &No);

    for(i=1;i<=No;i++)
    {
        fact = fact * i;
    }
    printf("\nThe Factorial Of %d Number = %d\n",No ,fact);
    return 0;
}
