#include<stdio.h>
#include<conio.h>
int main()
{
    float radius=0.0,area=0.0;
    const float PI = 3.14;
    
    printf("Enter Radius: ",radius);
    scanf("%f",&radius);

    area = PI * radius * radius;

    printf("Area: %f\n",area);

    getch();
    return 0;
}
