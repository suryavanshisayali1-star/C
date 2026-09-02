#include<stdio.h>
#include<conio.h>

int pwr();

int main()
{
    int result;

    result=pwr();

    printf("\n The power of given number is : %d" ,result);

    getch();
    return 0;
}

int pwr()
{
    int i = 0, base = 0, expo1 = 0, pwr = 1, expo2 = 0;

    printf("\n Enter the Base : ");
    scanf("%2d" ,&base);

    printf("\n Enter the exponent : ");
    scanf("%2d" ,&expo1);

     printf("\n Enter the exponent : ");
    scanf("%2d" ,&expo2);

    for(i = 1; i <= expo2; i++)
    {
        pwr = pwr * base*base;
    }
    return pwr;
}
