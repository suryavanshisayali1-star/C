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
    else
    {
        printf("The character %c is a not Alphabates",ch);
    }
    getch();
    return 0;
}