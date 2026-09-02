#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter Any Character:");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        while(ch >= 'A' && ch <= 'Z')
        {
            printf("\n%c",ch);
            ch++;
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
         while(ch >= 'a' && ch <= 'z')
        {
            printf("\n%c",ch);
            ch--;
        }
    }
    else
    {
        printf("INVALID OUTPUT");
    }
    getch();
    return 0;
}