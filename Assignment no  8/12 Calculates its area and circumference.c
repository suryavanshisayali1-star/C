#include <stdio.h>
#include <conio.h>

float Circum(float Radius);
float Area(float Radius);

int main()
{
    float Radius, Circumference, AreaValue;

    printf("Enter Radius : ");
    scanf("%f", &Radius);

    Circumference = Circum(Radius);
    AreaValue = Area(Radius);

    printf("\nCircumference = %.2f", Circumference);
    printf("\nArea = %.2f", AreaValue);

    getch();
    return 0;
}

float Circum(float Radius)
{
    return 2 * 3.14 * Radius;
}

float Area(float Radius)
{
    return 3.14 * Radius * Radius;
}
