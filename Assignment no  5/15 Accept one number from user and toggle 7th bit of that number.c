#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter the Number => ");
    scanf("%d",&No);

    No = No ^ (1 << 6);

    printf("\n Modified Number of given number = %d",No);

    getch();
    return 0;
}
