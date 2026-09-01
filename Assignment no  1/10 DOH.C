#include <stdio.h>
#include <conio.h>

int main() {
    char ch='\0';

    printf("Enter character: ");
    scanf("%c", &ch);

    printf("Decimal = %d\n", ch);
    printf("Octal = %o\n", ch);
    printf("Hexadecimal = %x\n", ch);

    getch();
    return 0;
}
