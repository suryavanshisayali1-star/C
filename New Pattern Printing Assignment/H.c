#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, rc;

    printf("Enter Number: ");
    scanf("%d", &rc);

    for(i = 1; i <= rc; i++)
    {
        for(j = 1; j <= rc; j++)
        {
            if(j == 1 || j == rc || i == (rc + 1) / 2)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
