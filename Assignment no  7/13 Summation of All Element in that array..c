#include <stdio.h>
#include <conio.h>

int main()
{
    int i, Billsum = 0, Bills[5] = {0};

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter %d Bills : ", i+1);
        scanf("%d", &Bills[i]);

        Billsum = Billsum + Bills[i];
    }

    printf("\nThe Sum Of All Bills = %d\n", Billsum);

    getch();
    return 0;
}
