#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, r, c;
    char ch;

    printf("Enter Number Row : ");
    scanf("%d", &r);

    printf("Enter Number Column : ");
    scanf("%d", &c);

    for(i = 1; i <= r; i++)
    {
        ch = 'A';

        for(j = 1; j <= c; j++)
        {
            if(i % 2 == 0)
            {
                printf(" %c ", ch + 32);
            }
            else
            {
                printf(" %c ", ch);
            }
            ch++;
        }

        printf("\n");
    }

    getch();
    return 0;
}
