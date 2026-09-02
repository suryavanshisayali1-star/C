#include <stdio.h>
#include <conio.h>

int main()
{
    int i,Min=0,Max=0, Bills[5] = {0};

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter %d Bills : ", i+1);
        scanf("%d", &Bills[i]);

        if(i == 0 || Bills[i] < Min)
        {
            Min = Bills[i];
            Bills[i] < Min;
        }

        if(i == 0 || Bills[i] > Max)
        {
            Max = Bills[i];
            Bills[i] > Max;
        }
    }

    printf("\nThe Maximum Of All Bills = %d\n", Max);
    printf("\nThe Minimum Of All Bills = %d\n", Min);

    getch();
    return 0;
}
