#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, rc;

    printf("Enter Number: ");
    scanf("%d", &rc);

    for(i=1; i<=rc; i++)
    {
        for(j=1; j<=rc; j++)
        {
            if(i==1 || i==rc || i+j==rc+1)
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
