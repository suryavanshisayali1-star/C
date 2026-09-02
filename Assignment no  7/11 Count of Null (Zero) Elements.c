#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, ZBct = 0, Bills[5] = {0};

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter %d Bills : ", i+1);
        scanf("%d", &Bills[i]);

        if(Bills[i] == 0)
        {
            ZBct++;
        }
    }

    printf("\nThe Zero Bills Count Of All Bills = %d\n", ZBct);

    getch();
    return 0;
}
