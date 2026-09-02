#include <stdio.h>
#include <conio.h>

int Square(int No);
int Cube(int No);

int main()
{
    int No, sq, cu;

    printf("Enter Number : ");
    scanf("%d", &No);

    sq = Square(No);
    cu = Cube(No);

    printf("\nSquare = %d", sq);
    printf("\nCube   = %d", cu);

    getch();
    return 0;
}

int Square(int No)
{
    return No * No;
}

int Cube(int No)
{
    return No * No * No;
}
