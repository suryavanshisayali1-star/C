#include <stdio.h>
#include <conio.h>

int main()
{
    int i=0,j=0,r=0,c=0,No=0;
    char ch='\0';

    printf("Enter Number Row : ");
    scanf("%d", &r);

    printf("Enter Number Column : ");
    scanf("%d", &c);

    for(i=1; i<=r; i++)
    {
        for(j=1,ch='A'; j<=c; j++,ch++)
        {
                printf(" %c ",ch);
        }
        ch++;
        printf("\n");

    }

    getch();
    return 0;
}
