#include <stdio.h>
#include <conio.h>

float PI_Value();

int main()
{
    float PI;

    PI = PI_Value();

    printf("PI = %2f", PI);

    getch();
    return 0;
}

float PI_Value()
{
    const float PI = 3.14;

    return PI;
}
