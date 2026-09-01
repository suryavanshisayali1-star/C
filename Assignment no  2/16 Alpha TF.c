#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter Any Character:");
    scanf("%c",&ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("True",ch);
    }
    else
    {
        printf("False",ch);
    }
    getch();
    return 0;
}