#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, r, c;

    printf("Enter Number of Rows : ");
    scanf("%d", &r);

    printf("Enter Number of Columns : ");
    scanf("%d", &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
