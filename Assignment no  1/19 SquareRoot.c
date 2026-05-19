#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int SquareRoot,number;
    printf("Enter Any Random No:");
    scanf("%d", &number);
    
    SquareRoot = sqrt(number);

    printf("Square Root of %d: %d",number,SquareRoot);

    getch();
    return 0;
}
