#include <stdio.h>
#include <conio.h>


int main()
{
    int i,Max=0, Bills[5] = {0};

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter %d Bills : ", i+1);
        scanf("%d", &Bills[i]);

        if(i == 0 || Bills[i] > Max)
        {
            Max = Bills[i];
            Max < Bills[i];
        }

    }

    printf("\nThe Max Of All Bills = %d\n", Max);

    getch();
    return 0;
}
