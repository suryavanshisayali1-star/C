#include <stdio.h>
#include <conio.h>

int main()
{
    int i,Values[5]={0};

    for(i=0;i<5;i++)
    {
        printf("The Value Of %d Element = %d\n",i,Values[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("\nEnter %d Value : ",i+1);
        scanf("%d", &Values[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("\nThe Value Of %d Element = %d\n",i+1,Values[i]);
    }

    getch();
    return 0;
}
