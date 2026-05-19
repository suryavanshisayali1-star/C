#include<stdio.h>
#include<conio.h>
int main()
{
    int square,number;
    printf("Enter Any Random No:");
    scanf("%d", &number);
    
    square = number * number;

    printf("Square of %d: %d",number,square);

    getch();
    return 0;
}
