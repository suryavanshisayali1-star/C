#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, spt, ept;

    printf("Enter Table Starting Range: ");
    scanf("%d",&spt);

    printf("Enter Table Ending Range: ");
    scanf("%d",&ept);

    printf("\n");

    for(i = 1; i <= 10; i++)
    {
        for(j = spt; j <= ept; j++)
        {
            printf("%4d", i*j);
        }
        printf("\n");
    }

    getch();
    return 0;
}
