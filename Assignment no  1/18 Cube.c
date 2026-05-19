#include<stdio.h>
#include<conio.h>
int main()
{
    int cube,number;
    printf("Enter Any Random No:");
    scanf("%d", &number);
    
    cube = number * number* number;

    printf("Cube of %d: %d",number,cube);

    getch();
    return 0;
}
