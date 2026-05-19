#include<stdio.h>
#include<conio.h>
int main()
{
    float meter=0.0,kilometer=0.0;
    
    printf("Enter Distance in KiloMeter:");
    scanf("%f",&kilometer);

    meter = kilometer * 1000;

    printf("Distance in meters: %f",kilometer);

    getch();
    return 0;
}
