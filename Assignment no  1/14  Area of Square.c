#include<stdio.h>
#include<conio.h>
int main()
{
    float side=0.0,area=0.0;
    printf("Enter side:");
    scanf("%f", &side);
    
    area = side * side;

    printf("Area of Square: %f",area);

    getch();
    return 0;
}
