#include <stdio.h>
#include <conio.h>

int main()
{
    int i=0,j=0,r=0,c=0;
    char ch='A';

    printf("Enter Number Row : ");
    scanf("%d", &r);

    printf("Enter Number Column : ");
    scanf("%d", &c);

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(ch>'Z')
            {
                ch='A';
            }
                printf(" %c ",ch);
                ch++;
        }
        printf("\n");
    }

    getch();
    return 0;
}
