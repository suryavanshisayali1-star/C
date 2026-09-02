#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, EBct = 0, OBct = 0, ZBct = 0, Bills[5] = {0};

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter %d Bills : ", i+1);
        scanf("%d", &Bills[i]);

        if(Bills[i] % 2 == 0)
        {
            EBct++;
        }

        if(Bills[i] % 2 == 1)
        {
            OBct++;
        }

        if(Bills[i] == 0)
        {
            ZBct++;
        }
    }

    printf("\n\n***********************************************************************");

    printf("\nThe Even Bills Count Of All Bills = %d\n", EBct);
    printf("\nThe Odd  Bills Count Of All Bills = %d\n", OBct);
    printf("\nThe Zero Bills Count Of All Bills = %d\n", ZBct);

    getch();
    return 0;
}
