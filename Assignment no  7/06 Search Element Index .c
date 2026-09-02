#include <stdio.h>
#include <conio.h>

int main()
{
    int i=0 ,Bills[10]={}, ScrEle=0;

    for(i=1;i<=10;i++)
    {
        printf("\nEnter %d Bills: ",i);
        scanf("%d", &Bills[i]);
    }

    printf("\n******************************************************************");

        printf("\n\nEnter Number: ");
        scanf("%d", &ScrEle);

    for(i=0; i<10; i++)
    {
        if(Bills[i] == ScrEle)
        {
            break;
        }
    }

    if(i < 10)
    {
        printf("\nElement %d Found On %d Index",ScrEle,i);
    }
    else
    {
        printf("\nElement Not Found");
    }

    getch();
    return 0;
}
