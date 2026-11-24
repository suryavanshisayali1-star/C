#include <stdio.h>
#include <conio.h>

int main()
{
    char ch=0;
    printf("Enter a Number :");
    scanf("%c",&ch);

    if(ch >= 65 && ch <= 90)
    {
        printf("The %c Uppercase \n",ch);
    }
    else if(ch >= 97 && ch <= 122)
    {
        printf("The %c Lowercase \n",ch);
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("The %c Digits \n",ch);
    }
    else
    {
        printf("The %c Symbols \n",ch);
    }

    getch();
    return 0;
}
