#include <stdio.h>
#include <conio.h>

int main()
{
    int i=0,j=0,rc=0;
    char ch='A';

    printf("Enter Number: ");
    scanf("%d", &rc);

    for(i=1;i<=rc;i++)
    {
        for(j=1;j<=rc;j++)
        {
            if(i==1||i==rc||j==1||j==rc)
            printf("%c",ch);

            else
            printf(" ");
        }
        ch++;
        printf("\n");
    }

    getch();
    return 0;
}
