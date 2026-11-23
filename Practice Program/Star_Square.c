#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,c,r;
    printf("Enter a Number :");
    scanf("%d",&r);
    printf("Enter a Number :");
    scanf("%d",&c);

    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
