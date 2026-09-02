#include <stdio.h>
#include <conio.h>

int main()
{
    int i=1,j=1,rc=0;
    char ch='A';

    printf("Enter Number: ");
    scanf("%d", &rc);

    for(i=1;i<=rc;i++)
    {
        for(j=1;j<=rc;j++)
        {
            printf("%c",ch++);
        }
        printf("\n");
    }

    getch();
    return 0;
}
