#include <stdio.h>
#include <conio.h>

int main()
{
    int i=0,j=0,rc;

    printf("Enter Number: ");
    scanf("%d", &rc);

    for(i=1; i<=rc; i++)
    {
        for(j=1; j<=rc; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
