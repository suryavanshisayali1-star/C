#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Size of int: %d byte\n",sizeof(int));
    printf("Size of float: %f byte\n",sizeof(float));
    printf("Size of char: %c byte\n",sizeof(char));
    printf("Size of double: %ld byte\n",sizeof(double));

    getch();
    return 0;
}
