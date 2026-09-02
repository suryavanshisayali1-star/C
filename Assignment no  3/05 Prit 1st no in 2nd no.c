//accept two numbers from user and display first number in second number of times.   

#include <stdio.h>
#include <conio.h>
int main()
{
    int No1=0,No2=0;
    printf("Enter 1st No:");
    scanf("%d",&No1);
    
    printf("Enter 2nd No:");
    scanf("%d",&No2);
    
    while(No2>=1)
    {
    printf("\n%d",No1);
    No2--;
    }
    
    getch();
    return 0;
}

