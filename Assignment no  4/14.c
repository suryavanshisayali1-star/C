#include <stdio.h>
#include <conio.h>

int main()
{
    int i=0,j=0,r=0,c=0,no=0;

    printf("Enter Number Row : ");
    scanf("%d", &r);

    printf("Enter Number Column : ");
    scanf("%d", &c);

    printf("Enter Number For Table Priting : ");
    scanf("%d", &no);

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
                printf(" %3d ", no *((j-1) * r+i));
        }
        printf("\n");
    }

    getch();
    return 0;
}
