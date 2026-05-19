#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int temp,number1,number2;

    printf("Enter First No:");
    scanf("%d", &number1);

    printf("Enter Second No:");
    scanf("%d", &number2);
    
    printf("*****************************************************");

    printf("\nBefore swappig:\number1=%d number2=%d\n",number1,number2);
    
    printf("*****************************************************");
    
    temp=number1;
    number1=number2;
    number2=temp;

    printf("\nAfter swapping:\number1=%d number2=%d\n",number1,number2);
    
    printf("*****************************************************");

    getch();
    return 0;
}
