#include <stdio.h>
#include <conio.h>

int main()
{
    int i=1,j=1,rc=0;

    newvalue:
    printf("Enter Only Odd Number: ");
    scanf("%d", &rc);


    if(rc%2==0)
    {
        goto newvalue;
    }

    for(i=1; i<=rc; i++)
    {
        for(j=1; j<=rc; j++)
        {
            if(i==j || i+j==rc+1)
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
