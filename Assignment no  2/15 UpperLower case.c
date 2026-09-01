#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter Any Character:");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("The character %c is a Uppercase.",ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("The character %c is a Lowercase.",ch);
    }
    else if(ch >='0' && ch <='9')
    {
        printf("The character %c is a Number.",ch);
    }
    else
    {
        printf("The character %c is a Special Symbol",ch);
    }
    getch();
    return 0;
}