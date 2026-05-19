#include<stdio.h>
#include<conio.h>
int main()
{
    int Year=0;
    printf("Enter Any Random Year:");
    scanf("%d",&Year);

    if(Year % 4 == 0)
    {
        printf("The year %d is a leap year.",Year);
    }
    
    else
    {
        printf("The year %d is not a leap year.",Year);
    }
    getch();
    return 0;
}