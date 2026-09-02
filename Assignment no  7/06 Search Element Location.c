#include <stdio.h>
#include <conio.h>

int main()
{
    int i=0 ,Bills[0], ScrEle=0;

    for(i=1;i<=5;i++)
    {
        printf("\nEnter %d Bills: ",i);
        scanf("%d", &Bills[i]);
    }

    printf("\n******************************************************************");

        printf("\n\nEnter Number: ");
        scanf("%d", &ScrEle);

    for(i=1; i<=10; i++)
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
        printf("\nElement %d Not Found At Location %d", ScrEle, i + 1);
    }

    getch();
    return 0;
}
