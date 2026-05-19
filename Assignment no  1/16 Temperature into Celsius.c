#include<stdio.h>
#include<conio.h>
int main()
{
    float celcius=0.0,fahrenheit =0.0;
    
    printf("Enter Temperature in Fahrenheit : " );
    scanf("%f",&fahrenheit );

    celcius = (fahrenheit  - 32) * (5.0/9.0);

    printf("Temperature in celcius: %0.2f °C",celcius);

    getch();
    return 0;
}
