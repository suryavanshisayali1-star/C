#include<stdio.h>
#include<conio.h>
int main()
{
    float radius=0.0,circumference=0.0;
    const float PI = 3.14;
    
    printf("Enter Radius: ",radius);
    scanf("%f",&radius);

    circumference =  2 * PI * radius;

    printf("Area of Circumference: %f\n",circumference);

    getch();
    return 0;
}
