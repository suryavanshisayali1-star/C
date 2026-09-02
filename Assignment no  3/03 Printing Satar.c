//accept a number from the user and print that number of * on screen. 

#include <stdio.h>
#include <conio.h>
int main()
{
    int i=0;
    printf("Enter Any Random No:");
    scanf("%d",&i);
    
    
    while(i>=1)
    {
    printf("\n*");
    i--;
    }
    
    getch();
    return 0;
}
