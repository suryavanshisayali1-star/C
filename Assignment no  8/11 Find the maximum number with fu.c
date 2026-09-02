#include <stdio.h>
#include <conio.h>

int Max();

int main()
{
    Max();

    getch();
    return 0;
}

int Max()
{
    int i,Max=0,Bill=0;

    for(i=1;i<=5;i++)
    {
        printf("Enter Bill %d : ",i);
        scanf("%d",&Bill);

         if(i == 1 || Bill > Max)
            {
                Max = Bill;
                Max < Bill;
            }
    }
    printf("\nThe Max Of All Bills = %d\n", Max);
    return 0;
}
