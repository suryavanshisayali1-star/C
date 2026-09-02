#include <stdio.h>
#include <conio.h>

int main()
{
    int i=1,j=1,rc=0;

    printf("Enter Number: ");
    scanf("%d", &rc);

    for(i=1; i<=rc; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i==j || i<=j || i+j<=8)
            {
                printf(" * ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
