#include <stdio.h>
#include <conio.h>

int main()
{
    int Values[5]={0};

    printf("The Value Of 1st Element = %d\n",Values[0]);
    printf("The Value Of 2nd Element = %d\n",Values[1]);
    printf("The Value Of 3rd Element = %d\n",Values[2]);
    printf("The Value Of 4th Element = %d\n",Values[3]);
    printf("The Value Of 5th Element = %d\n",Values[4]);

    printf("\n\nEnter 1st Value : ");
    scanf("%d", &Values[0]);

    printf("Enter 2nd Value : ");
    scanf("%d", &Values[1]);

    printf("Enter 3rd Value : ");
    scanf("%d", &Values[2]);

    printf("Enter 4th Value : ");
    scanf("%d", &Values[3]);

    printf("Enter 5th Value : ");
    scanf("%d", &Values[4]);

    printf("\n\nThe Value Of 1st Element = %d\n",Values[0]);
    printf("The Value Of 2nd Element = %d\n",Values[1]);
    printf("The Value Of 3rd Element = %d\n",Values[2]);
    printf("The Value Of 4th Element = %d\n",Values[3]);
    printf("The Value Of 5th Element = %d\n",Values[4]);

    getch();
    return 0;
}
