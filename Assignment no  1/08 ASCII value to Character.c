#include <stdio.h>
#include <conio.h>

int main()
{
    char ch='\0';
    printf("Enter a Character :");
    scanf("%c",&ch);

    printf("\nASCII Value of Entered Character in %c = %d",ch,ch);

    getch();
    return 0;
}
