#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter the Number => ");
    scanf("%d",&No);

    No = No ^ (1 << 6);
    No = No ^ (1 << 9);

    printf("\n Modified Number of given Number = %d",No);

    getch();
    return 0;
}
