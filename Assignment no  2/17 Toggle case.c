#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter Any Character:");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("After Lowercase Character %c.",ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("After Uppercase Character %c",ch);
    }
    else
    {
        printf("The character %c is a not Alphabates",ch);
    }
    getch();
    return 0;
}