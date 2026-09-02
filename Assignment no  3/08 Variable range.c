//print the letters in user specified range using a loop.

#include <stdio.h>
#include <conio.h>
int main()
{
    char spt='\0',ept='\0';
    printf("Enter 1st Character:");
    scanf(" %c", &spt);

    
    printf("Enter 2nd Character:");
    scanf(" %c", &ept);
    
    if(spt<=ept)
    {
        while(spt<=ept)
        {
            printf("%c",spt);
            spt++;
        }
    }
    else(spt>=ept)
    {
        while(spt>=ept)
        {
            printf("%c",spt);
            spt--;
        }
    }
    
    return 0;
}
