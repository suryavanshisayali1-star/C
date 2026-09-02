#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, Bct = 0,Amt=0, Bills[5] = {0};

    printf("\nEnter Amount : ");
    scanf("%d", &Amt);

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter Bills %d: ", i+1);
        scanf("%d", &Bills[i]);

        if(Bills[i] == Amt)
        {
            Bct++;
        }
    }

    printf("\n\n***********************************************************************\n\n");

    printf("\nThe %d Amount Bills Count Of All Bills = %d\n", Amt,Bct);

    getch();
    return 0;
}
