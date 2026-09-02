#include <stdio.h>
#include <conio.h>

int main()
{
    int i=0,j=0,r=0,c=0,No=0;

    printf("Enter Number Row : ");
    scanf("%d", &r);

    printf("Enter Number Column : ");
    scanf("%d", &c);

    for(i=1,No=5; i<=r; i++,No--)
    {
        for(j=1; j<=c; j++)
        {
                printf(" %d ",No);
        }
        printf("\n");
    }

    getch();
    return 0;
}
