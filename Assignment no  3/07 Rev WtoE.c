 //print the letters from W to E using a loop.

#include <stdio.h>
#include <conio.h>
int main()
{
    char ch='W';
    
    while(ch >= 'E')
    {
    printf("\n%c",ch);
    ch--;
    }
    
    getch();
    return 0;
}