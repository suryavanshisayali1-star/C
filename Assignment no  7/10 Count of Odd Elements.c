#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, OBct = 0, Bills[5] = {0};

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter %d Bills : ", i+1);
        scanf("%d", &Bills[i]);

        if(Bills[i] % 2 == 1)
        {
            OBct++;
        }
    }

    printf("\nThe Odd Bills Count Of All Bills = %d\n", OBct);

    getch();
    return 0;
}
