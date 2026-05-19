#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int number1,number2,number3;

    printf("Enter First No:");
    scanf("%d", &number1);

    printf("Enter Second No:");
    scanf("%d", &number2);

    printf("Enter Third No:");
    scanf("%d", &number3);
    
    printf("*****************************************************");

    printf("\nBefore swappig:\number1=%d number2=%d number3=%d\n",number1,number2,number3);
    
    printf("*****************************************************");
    
    number1 = number1 + number2 + number3;
    number2 = number1 - (number2 + number3);
    number3 = number1 - (number2 + number3);
    number1 = number1 - (number2 + number3);
    
    printf("\nAfter swapping:\number1=%d number2=%d number3=%d\n",number1,number2,number3);
    
    printf("*****************************************************");

    getch();
    return 0;
}
