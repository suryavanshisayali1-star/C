#include <stdio.h>
#include <conio.h>

int main()
{
    int i=1,j=1,rc=0;

    printf("Enter Number: ");
    scanf("%d", &rc);

    for(i=1; i<=rc; i++)
    {
        for(j=1; j<=rc; j++)
        {
            if(j==1 || j==rc || i==j)
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
