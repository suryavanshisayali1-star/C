 //print the letters from H to N using a loop.

#include <stdio.h>
#include <conio.h>
int main()
{
    char ch='H';
    
    while(ch <= 'N')
    {
    printf("\n%c",ch);
    ch++;
    }
    
    getch();
    return 0;
}