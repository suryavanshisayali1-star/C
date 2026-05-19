#include<stdio.h>
#include<conio.h>
int main()
{
    float area=0.0,width=0.0,height=0.0;

    printf("Enter Height: ",height);
    scanf("%f",&height);

    printf("Enter Width: ",width);
    scanf("%f",&width);
    
    area = width * height;

    printf("Area of Rectangle:%0.2f",area);

    getch();
    return 0;
}
